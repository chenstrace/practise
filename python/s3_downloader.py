import argparse
import boto3
import toml
import os
import urllib.parse


def parse_args():
    parser = argparse.ArgumentParser(description="Download a file from S3 using configuration from a TOML file.")
    parser.add_argument("-c", "--config", type=str, default="/Users/chenjili/project/woodpecker/config/s3cdn.toml", help="Path to the configuration file.")
    parser.add_argument("s3_url", type=str, help="The S3 HTTP URL to download the file from.")
    return parser.parse_args()


def parse_s3_url(s3_url):
    parsed_url = urllib.parse.urlparse(s3_url)
    bucket_name = parsed_url.hostname.split('.')[0]
    region = parsed_url.hostname.split('.')[2]
    key = parsed_url.path.lstrip('/')
    return bucket_name, region, key


def get_s3_client(config, bucket_name, url_region):
    if bucket_name in config:
        access_key = config[bucket_name]["access_key_id"]
        secret_key = config[bucket_name]["secret_access_key"]
        config_region = config[bucket_name]["region"]

        if config_region != url_region:
            raise ValueError(
                f"Region mismatch for bucket {bucket_name}: URL region is {url_region}, but config region is {config_region}")
    else:
        raise ValueError(f"No credentials found for bucket {bucket_name} in the configuration file")

    session = boto3.Session(
        aws_access_key_id=access_key,
        aws_secret_access_key=secret_key,
        region_name=config_region
    )
    return session.client('s3')


def download_file(s3_client, bucket_name, key, local_file_name):
    s3_client.download_file(bucket_name, key, local_file_name)


def main():
    args = parse_args()

    # Load configuration
    with open(args.config, 'r') as config_file:
        config = toml.load(config_file)

    # Parse S3 URL
    bucket_name, url_region, key = parse_s3_url(args.s3_url)

    # Get S3 client
    s3_client = get_s3_client(config, bucket_name, url_region)

    # Extract the filename from the URL
    local_file_name = os.path.basename(key)

    # Download the file
    download_file(s3_client, bucket_name, key, local_file_name)

    print(f"File downloaded as {local_file_name}")


if __name__ == "__main__":
    main()
