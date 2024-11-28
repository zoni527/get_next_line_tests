/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_test_kalevala.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:42:01 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/25 11:55:26 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

#ifndef FILE_LIMIT
# define FILE_LIMIT 5
#endif

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char	*rval;
	int		fd;

	(void)fd;
	fd = open("./test_file_kalevala", O_RDONLY);
	printf("%20s%d\n", "BUFFER_SIZE: ", BUFFER_SIZE);
	printf("%20s%d\n", "FILE_LIMIT: ", FILE_LIMIT);
	while((rval = get_next_line(fd)))
	{
		printf("%s", rval);
		free (rval);
	}
	printf("%20s%d\n", "BUFFER_SIZE: ", BUFFER_SIZE);
	printf("%20s%d\n", "FILE_LIMIT: ", FILE_LIMIT);
	return (0);
}
