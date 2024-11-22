# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 15:58:04 by jvarila           #+#    #+#              #
#    Updated: 2024/11/13 09:56:25 by jvarila          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

BS ?= 1024

SRCDIR = ~/Repos/get_next_line/
SRC = $(wildcard $(SRCDIR)*.c)

all: get_next_line_test_01 get_next_line_test_02

get_next_line_test_01: get_next_line_test_01.c $(SRC) get_next_line.h
	$(CC) $(CFLAGS) -D BUFFER_SIZE=$(BS) $(SRC) $< -o $@ -g

get_next_line_test_02: get_next_line_test_02.c $(SRC) get_next_line.h
	$(CC) $(CFLAGS) -D BUFFER_SIZE=$(BS) $(SRC) $< -o $@ -g
	
get_next_line.h: ~/Repos/get_next_line/get_next_line.h
	cp $< ./

clean:

fclean: clean
	rm -f get_next_line_test_01 get_next_line_test_02

re: fclean all

.PHONY: clean fclean re all
