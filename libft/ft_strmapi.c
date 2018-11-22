/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 23:16:37 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/13 23:16:40 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	s2 = (char *)s;
	str = (char *)malloc((ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s2[i] != '\0')
	{
		str[i] = (*f)(i, s2[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
