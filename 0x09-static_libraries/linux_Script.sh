#!/bin/bash

for file in *; do
    if [ -f "$file" ]; then
        base_name=$(basename "$file")
        obj_name="lib_${base_name%.*}.o"
        gcc -c "$file" -o "$obj_name"
    fi
done
