/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 00:12:45 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/10 00:12:46 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *memdst;
	char *memsrc;

	memsrc = (char *)src;
	memdst = (char *)dst;
	if (dst < src)
		ft_memcpy(memdst, memsrc, len);
	else
		while (len--)
			*(memdst + len) = *(memsrc + len);
	return (dst);
}
