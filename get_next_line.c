/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <sohaib.laanani@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 19:55:55 by slaanani          #+#    #+#             */
/*   Updated: 2018/11/06 03:35:14 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	static char		*memorize[4864];
	int				i;
	int				bytes_read;

	if (fd < 0 || line == NULL || read(fd, buff, 0) < 0)
		return (-1);
	if (!memorize[fd])
		memorize[fd] = ft_strnew(0);
	while ((bytes_read = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[bytes_read] = '\0';
		memorize[fd] = ft_strjoin(memorize[fd], buff);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	i = 0;
	while (memorize[fd][i] != '\n' && memorize[fd][i] != '\0')
		i++;
	*line = ft_strsub(memorize[fd], 0, i);
	if (ft_strlen(memorize[fd]) == 0 && i == 0 && bytes_read == 0)
		return (0);
	memorize[fd] = ft_strdup(memorize[fd] + i + 1);
	return (1);
}
