import argparse
import redis


def connect_redis():
    return redis.StrictRedis(host='localhost', port=6379, db=0)


def add_to_redis_set(redis_client, value):
    redis_client.sadd('remark_list', value)


def remove_from_redis_set(redis_client, value):
    redis_client.srem('remark_list', value)


def list_redis_set(redis_client):
    elements = redis_client.smembers('remark_list')
    if elements:
        for element in elements:
            print(element.decode('utf-8'))  # Redis返回的数据是字节序列，我们需要解码成字符串
    else:
        print("No elements found in 'remark_list'")


def main():
    parser = argparse.ArgumentParser(description='Operate on a Redis set')
    group = parser.add_mutually_exclusive_group(required=True)
    group.add_argument('-a', '--add', type=str, metavar='VALUE', help='Add a value to the Redis set')
    group.add_argument('-d', '--delete', type=str, metavar='VALUE', help='Delete a value from the Redis set')
    group.add_argument('-l', '--list', action='store_true', help='List all values in the Redis set')

    args = parser.parse_args()

    redis_client = connect_redis()

    if args.add:
        add_to_redis_set(redis_client, args.add)
    elif args.delete:
        remove_from_redis_set(redis_client, args.delete)
    elif args.list:
        list_redis_set(redis_client)


if __name__ == "__main__":
    main()
