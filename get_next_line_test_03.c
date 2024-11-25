/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_test_03.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:42:01 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/25 12:39:08 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char	*s1;
	char	*s2;
	int		fd1;
	int		fd2;

	(void)fd1;
	(void)fd2;
	fd1 = open("./test_file_letter_lines", O_RDONLY);
	fd2 = open("./test_file_number_lines", O_RDONLY);
	printf("%20s%d\n", "BUFFER_SIZE: ", BUFFER_SIZE);
	printf("%20s%d\n", "FILE_LIMIT: ", FILE_LIMIT);
	while((s1 = get_next_line(fd1)) && (s2 = get_next_line(fd2)))
	{
		printf("%s", s1);
		printf("%s", s2);
		if (s1)
			free(s1);
		if (s2)
			free(s2);
	}
	printf("%20s%d\n", "BUFFER_SIZE: ", BUFFER_SIZE);
	printf("%20s%d\n", "FILE_LIMIT: ", FILE_LIMIT);
	return (0);
}
