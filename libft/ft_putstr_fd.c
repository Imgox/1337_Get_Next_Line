/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 00:54:24 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/16 00:54:25 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return ;
	str = (char *)s;
	while (str[i])
		ft_putchar_fd(str[i++], fd);
}
