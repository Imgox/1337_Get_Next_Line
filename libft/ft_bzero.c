/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:19:27 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/09 19:19:29 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char		*dest;

	i = 0;
	dest = s;
	while (i < n)
	{
		dest[i] = (unsigned char)NULL;
		i++;
	}
	return (dest);
}
