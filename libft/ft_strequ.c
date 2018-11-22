/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 23:28:38 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/13 23:28:41 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	size_t	len;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!str1 || !str2)
		return (0);
	if (ft_strlen(str1) != ft_strlen(str2))
		return (0);
	else
	{
		len = ft_strlen(str1);
		while (len--)
		{
			if (*str1 != *str2)
				return (0);
			str1++;
			str2++;
		}
		return (1);
	}
	return (0);
}
