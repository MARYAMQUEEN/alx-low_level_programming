#!/bin/bash

n=$((RANDOM % 201 - 100))

echo "$n"

if ((n > 0)); then
    echo "is positive"
elif ((n == 0)); then
    echo "is zero"
else
    echo "is negative"
fi
