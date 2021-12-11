for f in part1/*.test part2/*.test
do
	mv "$f" "${f%.test}"
done
