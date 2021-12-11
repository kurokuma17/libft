#!/bin/sh
for f in part1/*.test part2/*.test bonus/*.test
do
	mv "$f" "${f%.test}"
done
