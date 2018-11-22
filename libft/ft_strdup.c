/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:25:28 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/10 18:25:30 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*array;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	array = (char*)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < len)
		{
			array[i] = s1[i];
			i++;
		}
		array[i] = '\0';
	}
	return (array);
}
