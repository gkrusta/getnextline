/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:05:32 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/09 12:56:29 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*str_ac = NULL;
	char	*line;

	fd = open("example.txt", O_RDONLY);
	str_ac = ft_find_char(fd, str_ac);
	line = ft_get_line(str_ac);
	printf("result: %s", line);

	return (0);
}
