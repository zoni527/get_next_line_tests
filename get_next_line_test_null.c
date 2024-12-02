/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_test_null.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:42:01 by jvarila           #+#    #+#             */
/*   Updated: 2024/12/02 11:50:01 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

#ifndef FILE_LIMIT
# define FILE_LIMIT 1
#endif

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char	*s;
	int		fd;

	(void)fd;
	s = NULL;
	fd = open("./test_file_null", O_RDONLY);
	printf("%20s%d\n", "BUFFER_SIZE: ", BUFFER_SIZE);
	printf("%20s%d\n", "FILE_LIMIT: ", FILE_LIMIT);
	while((s = get_next_line(fd)))
	{
		printf("%s", s);
		if (s != NULL)
		{
			free(s);
			s = NULL;
		}
	}
	printf("%20s%d\n", "BUFFER_SIZE: ", BUFFER_SIZE);
	printf("%20s%d\n", "FILE_LIMIT: ", FILE_LIMIT);
	if (s != NULL)
		free(s);
	return (0);
}
