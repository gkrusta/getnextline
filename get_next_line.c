/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 19:15:07 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/07 19:29:30 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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