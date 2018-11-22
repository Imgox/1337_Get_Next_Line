/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 16:31:14 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/11 16:34:19 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*str;
	char	*to_find;

	str = (char *)haystack;
	to_find = (char *)needle;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find &&
			ft_memcmp(str, to_find, ft_strlen(to_find)) == 0)
			return (str);
		str++;
	}
	return (NULL);
}
