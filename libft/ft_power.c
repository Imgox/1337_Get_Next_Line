/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <sohaib.laanani@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 01:23:57 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/19 01:40:39 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int number, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (number * ft_power(number, power - 1));
}
