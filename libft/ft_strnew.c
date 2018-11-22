/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 21:40:33 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/13 21:40:34 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (str)
	{
		while (size--)
		{
			*(str++) = '\0';
			i++;
		}
		*str = '\0';
		str -= i;
		return (str);
	}
	return (NULL);
}
