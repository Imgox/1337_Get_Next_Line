/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 00:00:40 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/13 00:00:41 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 97 + 65);
	return (c);
}
