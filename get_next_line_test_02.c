/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_test_02.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:42:01 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/22 10:08:10 by jvarila          ###   ########.fr       */
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
	char	*rval;
	int		fd;

	(void)fd;
	// fd = open("./test_file_06", O_RDONLY);
	if (argc == 1)
	{
		printf("%20s%d\n", "BUFFER_SIZE: ", BUFFER_SIZE);
		printf("%20s%d\n", "FILE_LIMIT: ", FILE_LIMIT);
	}
	while((rval = get_next_line(STDIN_FILENO)))
	{
		printf("%s", rval);
		free (rval);
	}
	if (argc == 1)
	{
		printf("%20s%d\n", "BUFFER_SIZE: ", BUFFER_SIZE);
		printf("%20s%d\n", "FILE_LIMIT: ", FILE_LIMIT);
	}
	return (0);
}
