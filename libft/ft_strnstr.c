/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 17:24:50 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/11 17:24:51 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*to_find;

	str = (char *)haystack;
	to_find = (char *)needle;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0' && len-- >= ft_strlen(to_find))
	{
		if (ft_memcmp(str, to_find, ft_strlen(to_find)) == 0)
			return (str);
		str++;
	}
	return (NULL);
}
