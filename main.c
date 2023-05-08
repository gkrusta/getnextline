/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:05:32 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/08 18:09:36 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*str_ac = NULL;

	fd = open("example.txt", O_RDONLY);
	str_ac = ft_find_char(fd, str_ac);

	printf("result: %s", str_ac);

	return (0);
}
