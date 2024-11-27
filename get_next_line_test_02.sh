#!/bin/bash
for f in ./test_file_[0-9a-z]*[^.sh]
do
	./get_next_line_test_02 a < $f > ${f}_test_02_output
	diff $f ${f}_test_02_output -u --color
	rm ${f}_test_02_output
done
