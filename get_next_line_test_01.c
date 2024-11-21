/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_test_01.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:42:01 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/21 13:43:41 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char	*rval;
	int		fd;

	(void)fd;
	rval = get_next_line(STDIN_FILENO);
	printf("%s", rval);
	printf("%20s%d\n", "BUFFER_SIZE: ", BUFFER_SIZE);
	free (rval);
	return (0);
}
