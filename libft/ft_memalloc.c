/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 20:12:01 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/13 20:12:03 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	*tutu;
	int		i;

	i = 0;
	tutu = (void *)malloc(size * sizeof(size_t));
	if (tutu)
	{
		while (size--)
		{
			*(tutu++) = 0;
			i++;
		}
		tutu -= i;
		return (tutu);
	}
	return (NULL);
}
