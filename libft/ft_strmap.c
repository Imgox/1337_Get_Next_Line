/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 22:36:17 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/13 22:36:18 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		str[i] = (*f)(s2[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
