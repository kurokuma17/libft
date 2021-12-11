#!/bin/sh
for f in part1/*.c part2/*.c bonus/*.c bonus2/*.c
do
	mv "$f" "${f}.test"
done
