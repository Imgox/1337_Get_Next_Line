/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 15:35:10 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/10 15:35:12 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *mems;
	unsigned char memc;

	mems = (unsigned char *)s;
	memc = (unsigned char)c;
	while (n--)
	{
		if (*mems == memc)
		{
			return (mems);
		}
		mems++;
	}
	return (NULL);
}
