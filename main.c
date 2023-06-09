/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:05:32 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/11 18:24:37 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("example.txt", O_RDONLY);

	line = get_next_line(fd); // 1st call
	printf("result: %s", line);

	line = get_next_line(fd); // 2nd call
	printf("result: %s", line);

	line = get_next_line(fd); // 3rd call
	printf("result: %s", line);

	line = get_next_line(fd); // ...
	printf("result: %s", line);

	line = get_next_line(fd);
	printf("result: %s", line);

	return (0);
}
