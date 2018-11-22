/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 03:25:24 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/20 03:25:26 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_words(char *str)
{
	int	word;
	int number_words;
	int i;

	word = 0;
	number_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && word == 0)
		{
			++number_words;
			word = 1;
		}
		else if ((str[i] == '\n' || str[i] == '\t' || str[i] == ' '))
		{
			word = 0;
		}
		++i;
	}
	return (number_words);
}
