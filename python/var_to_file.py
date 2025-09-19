#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import ast
import os
import sys
import argparse


def main():
    parser = argparse.ArgumentParser(description='Convert Python string variable to file content')
    parser.add_argument('input_file', help='Input file containing Python string variable')
    parser.add_argument('-o', '--output', default='out_file.txt', help='Output file (default: out_file.txt)')
    
    args = parser.parse_args()
    
    try:
        with open(args.input_file, 'r', encoding='utf-8') as f:
            content = f.read()

        try:
            parsed_content = ast.literal_eval(content)

            with open(args.output, 'w', encoding='utf-8') as f:
                f.write(parsed_content)

            print("✅ Successfully wrote to", args.output)
            print(f"📁 Output file: {os.path.abspath(args.output)}")

        except ValueError as e:
            print(f"❌ Failed to parse string: {e}")

    except FileNotFoundError:
        print(f"❌ File {args.input_file} not found")
    except Exception as e:
        print(f"❌ Processing failed: {e}")


if __name__ == "__main__":
    main()
