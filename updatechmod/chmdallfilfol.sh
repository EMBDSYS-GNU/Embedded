#!/bin/bash

# Author: Hsein Elzein
# Topic: Automatically change permissions recursively
# Date: Wed Sep 23, 2026

DIR="${1:-}"

if [ -z "$DIR" ]; then
    echo "Usage: $0 <directory>"
    exit 1
fi

if [ ! -d "$DIR" ]; then
    echo "Error: '$DIR' is not a valid directory."
    exit 1
fi

if [ -z "$(find "$DIR" -mindepth 1 -print -quit)" ]; then
    echo "Directory is empty."
    exit 0
fi

echo "Changing permissions recursively in: $DIR"

chmod -R 777 -- "$DIR"

echo "Permissions updated successfully."
find "$DIR" -printf "%M %p\n"