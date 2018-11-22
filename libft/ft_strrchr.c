/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 00:45:59 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/11 00:46:00 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*str;
	size_t	i;
	int		p;

	str = (char *)s;
	ch = (char)c;
	i = 0;
	p = -1;
	while (i <= ft_strlen(str))
	{
		if (str[i] == ch)
			p = i;
		i++;
	}
	if (p != -1)
		return (str + p);
	return (NULL);
}
