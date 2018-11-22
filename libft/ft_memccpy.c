/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 21:15:18 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/09 21:15:20 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *memdst;
	unsigned char *memsrc;
	unsigned char ch;

	memsrc = (unsigned char *)src;
	memdst = (unsigned char *)dst;
	ch = (unsigned char)c;
	while (n > 0)
	{
		*(memdst++) = *(memsrc++);
		if (*(memsrc - 1) == ch)
		{
			return (memdst);
		}
		n--;
	}
	return (NULL);
}
