/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:45:59 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/10 17:46:01 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mems1;
	unsigned char	*mems2;
	int				i;

	i = 0;
	mems1 = (unsigned char *)s1;
	mems2 = (unsigned char *)s2;
	while (n--)
	{
		if (mems1[i] != mems2[i])
			return (mems1[i] - mems2[i]);
		i++;
	}
	return (0);
}
