#!/bin/bash
./get_next_line_test_01 < ./test_file_01 > test_file_01_output
./get_next_line_test_01 < ./test_file_02 > test_file_02_output
./get_next_line_test_01 < ./test_file_03 > test_file_03_output
./get_next_line_test_01 < ./test_file_empty > test_file_empty_output
