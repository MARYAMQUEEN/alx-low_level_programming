#!/bin/bash

for (( i = 97; i <= 122; i++ )); do
  putchar "$i"
done

putchar $'\n'
