/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 19:15:07 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/08 13:49:13 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//store memory
{

}

//to give memory for a line (char *memory)
{
	char	*line; // new line
	int		lenght;
	int		i;

	lenght = ft_line_len(memory);
	if (!lenght)
		return (NULL);
	line = malloc(sizeof(char) * lenght + 1);
	return (line);
}

static char	*ft_find_char(int fd, char *str_ac)
{
	char	*temp;
	int		read_return;

	if (!str_ac)
		str_ac = ft_calloc(1, sizeof(char));
	temp = ft_calloc(BUFF_SIZE + 1, sizeof(char));
	read_return = 1;
	while (read_return > 0)
	{
		read_return = read(fd, temp, BUFF_SIZE);
		if (read_return < 0)
		{
			free(temp);
			return (NULL);
		}
		temp[read_return] = '\0';
		str_ac = ft_strjoin(str_ac, temp);
		if (ft_strchr(temp, '\n') == 1)
			break ;
	}
	free(temp);
	return (str_ac);
}

static char	*ft_concat_free(char *str_ac, char *temp)
{
	char	*result;

	ft_strjoin(str_ac, temp);
	free(str_ac);
	return (result);
}

int	main(void)
{
	int		fd;
	char	*str_ac;

	fd = open("example.txt", O_RDONLY);
	str_ac = ft_find_char(fd, str_ac);
	printf("result: %s", str_ac);

	return (0);
}
