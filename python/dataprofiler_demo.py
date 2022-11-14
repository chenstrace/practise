# -*- coding: UTF-8 -*-

import json
from dataprofiler import Data, Profiler


def main():
    # Auto-Detect & Load: CSV, AVRO, Parquet, JSON, Text, URL
    data = Data("aws_honeypot_marx_geo.csv")

    # Access data directly via a compatible Pandas DataFrame
    print(data.data.head(5))

    profile = Profiler(data)  # Calculate Statistics, Entity Recognition, etc

    readable_report = profile.report(
        report_options={"output_format": "compact"})

    print(json.dumps(readable_report, indent=4))


if __name__ == '__main__':
    main()
