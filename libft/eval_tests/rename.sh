#!/bin/bash
for f in part1/*.c part2/*.c
do
	mv "$f" "${f}.test"
done
