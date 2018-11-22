/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 18:52:10 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/16 00:29:27 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			count_digits(int n)
{
	int				count;
	unsigned int	nb;

	count = 0;
	nb = (unsigned int)n;
	if (n < 0)
	{
		count++;
		nb *= -1;
	}
	while (nb >= 10)
	{
		nb /= 10;
		count++;
	}
	count++;
	return (count);
}

static size_t		p_o_t(int n)
{
	if (n == 0)
		return (1);
	else if (n == 1)
		return (10);
	else
		return (10 * p_o_t(n - 1));
}

char				*ft_itoa(int n)
{
	int				size;
	char			*str;
	int				i;
	unsigned int	nb;

	nb = (unsigned int)n;
	i = 0;
	size = count_digits(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i++] = '-';
		nb *= -1;
		size--;
	}
	while (size--)
		str[i++] = (nb / p_o_t(size)) % 10 + '0';
	str[i] = '\0';
	return (str);
}
