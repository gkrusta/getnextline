/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 19:15:07 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/09 15:36:46 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//store memory
//to give memory for a line (char *memory)
/* {
	char	*line; // new line
	int		lenght;
	int		i;

	lenght = ft_line_len(memory);
	if (!lenght)
		return (NULL);
	line = malloc(sizeof(char) * lenght + 1);
	return (line);
} */

char	*ft_find_char(int fd, char *str_ac)
{
	char	*temp;
	int		read_return;

	if (!str_ac) // for the 1st time of the function call
		str_ac = ft_calloc(1, sizeof(char));
	temp = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	read_return = 1;
	while (read_return > 0)
	{
		read_return = read(fd, temp, BUFFER_SIZE);
		if (read_return < 0)
		{
			free(temp);
			return (NULL);
		}
		temp[read_return] = '\0';
		str_ac = ft_concat_free(str_ac, temp);
		if (ft_strchr(temp, '\n') == 1)
			break ;
	}
	free(temp);
	return (str_ac);
}

char	*ft_concat_free(char *str_ac, char *temp)
{
	char	*joined_str;

	joined_str = ft_strjoin(str_ac, temp);
	free(str_ac);
	return (joined_str);
}

char	*ft_get_line(char *str_ac)
{
	char	*line;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_line_len(str_ac) + 2; // 2 for the \n
	if (!len)
		return (NULL);
	line = ft_calloc(len, sizeof(char));
	while (str_ac[i] && str_ac[i] != '\n')
	{
		line[i] = str_ac[i];
		i++;
	}
	line[i++] = '\n';
	return (line);
}

char	*ft_clear_str_ac(char *str_ac)
{
	int	i;

	i = 0;
	while ()
}

char	*get_next_line(int fd)
{
	static char	*str_ac = NULL;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	str_ac = ft_find_char(fd, str_ac);
	line = ft_get_line(str_ac);
	str_ac = ft_clear_str_ac(str_ac);
	return (line);
}
