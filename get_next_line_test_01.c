/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_test_01.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:42:01 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/25 13:24:14 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	char	*rval;
	int		fd;

	(void)argc;
	(void)argv;
	(void)fd;
	printf("%20s%d\n", "BUFFER_SIZE: ", BUFFER_SIZE);
	printf("%20s%d\n", "FILE_LIMIT: ", FILE_LIMIT);
	rval = get_next_line(STDIN_FILENO);
	printf("%s", rval);
	free (rval);
	printf("%20s%d\n", "BUFFER_SIZE: ", BUFFER_SIZE);
	printf("%20s%d\n", "FILE_LIMIT: ", FILE_LIMIT);
	return (0);
}
