#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
import json
import sys
import argparse


def main():
    parser = argparse.ArgumentParser(description='Convert file content to Python string variable')
    parser.add_argument('input_file', help='Input file to convert')
    parser.add_argument('-o', '--output', default='out_var.txt', help='Output file (default: out_var.txt)')
    
    args = parser.parse_args()
    
    try:
        with open(args.input_file, 'r', encoding='utf-8') as f:
            content = f.read()

        print(f"Read content from {args.input_file}")
        python_string = json.dumps(content)

        print(f"Python string variable: {python_string}")

        with open(args.output, 'w', encoding='utf-8') as f:
            f.write(python_string)

        print("✅ Successfully wrote Python string variable to", args.output)
        print(f"📁 Output file: {os.path.abspath(args.output)}")

    except FileNotFoundError:
        print(f"❌ File {args.input_file} not found")
    except Exception as e:
        print(f"❌ Processing failed: {e}")


if __name__ == "__main__":
    main()
