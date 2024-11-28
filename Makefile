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
FL ?= 5

SRCDIR = ~/Projects/get_next_line/try2/
SRC = $(SRCDIR)get_next_line.c $(SRCDIR)get_next_line_utils.c
BONUSSRC = $(SRCDIR)get_next_line_bonus.c $(SRCDIR)get_next_line_utils_bonus.c

all:	get_next_line_test_01	get_next_line_test_02	get_next_line_test_03 \
	get_next_line_test_kalevala

get_next_line_test_01: get_next_line_test_01.c $(SRC) get_next_line.h
	$(CC) $(CFLAGS) -D BUFFER_SIZE=$(BS) -D FILE_LIMIT=$(FL) $(SRC) $< -o $@ -g

get_next_line_test_02: get_next_line_test_02.c $(SRC) get_next_line.h
	$(CC) $(CFLAGS) -D BUFFER_SIZE=$(BS) -D FILE_LIMIT=$(FL) $(SRC) $< -o $@ -g

get_next_line_test_03: get_next_line_test_03.c $(SRC) get_next_line.h
	$(CC) $(CFLAGS) -D BUFFER_SIZE=$(BS) -D FILE_LIMIT=$(FL) $(SRC) $< -o $@ -g

get_next_line_test_kalevala: get_next_line_test_kalevala.c $(SRC) get_next_line.h
	$(CC) $(CFLAGS) -D BUFFER_SIZE=$(BS) -D FILE_LIMIT=$(FL) $(SRC) $< -o $@ -g

get_next_line.h: $(SRCDIR)get_next_line.h
	cp $< ./

bonus:	get_next_line_test_01_bonus	get_next_line_test_02_bonus \
	get_next_line_test_03_bonus	get_next_line_test_kalevala_bonus

get_next_line_test_01_bonus: get_next_line_test_01.c \
	$(BONUSSRC) get_next_line_bonus.h
	$(CC) $(CFLAGS) -D BUFFER_SIZE=$(BS) -D FILE_LIMIT=$(FL) $(SRC) $< -o $@ -g

get_next_line_test_02_bonus: get_next_line_test_02.c \
	$(BONUSSRC) get_next_line_bonus.h
	$(CC) $(CFLAGS) -D BUFFER_SIZE=$(BS) -D FILE_LIMIT=$(FL) $(SRC) $< -o $@ -g

get_next_line_test_03_bonus: get_next_line_test_03.c \
	$(BONUSSRC) get_next_line_bonus.h
	$(CC) $(CFLAGS) -D BUFFER_SIZE=$(BS) -D FILE_LIMIT=$(FL) $(SRC) $< -o $@ -g

get_next_line_test_kalevala_bonus: get_next_line_test_kalevala.c \
	$(BONUSSRC) get_next_line_bonus.h
	$(CC) $(CFLAGS) -D BUFFER_SIZE=$(BS) -D FILE_LIMIT=$(FL) $(SRC) $< -o $@ -g

get_next_line_bonus.h: $(SRCDIR)get_next_line_bonus.h
	cp $< ./

clean:

fclean: clean
	rm -f get_next_line_test_01 get_next_line_test_02 get_next_line_test_03 \
		get_next_line_test_kalevala
	rm -f get_next_line_test_01_bonus get_next_line_test_02_bonus \
		get_next_line_test_03_bonus get_next_line_test_kalevala_bonus

re: fclean all

.PHONY: clean fclean re all
