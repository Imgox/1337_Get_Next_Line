/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 01:29:31 by slaanani          #+#    #+#             */
/*   Updated: 2018/10/14 01:29:32 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *str, char c)
{
	int			word;
	int			number_words;
	int			i;

	word = 0;
	number_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && word == 0)
		{
			number_words++;
			word = 1;
		}
		else if (str[i] == c)
		{
			word = 0;
		}
		++i;
	}
	return (number_words);
}

static int		calculate_length(const char *str, char c)
{
	int			i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		++i;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		index;

	if (!s)
		return (NULL);
	index = 0;
	nb_word = count_words((const char *)s, c);
	t = (char **)malloc(sizeof(*t) * (count_words((const char *)s, c) + 1));
	if (t == NULL)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[index] = ft_strsub((const char *)s, 0,
			calculate_length((const char *)s, c));
		if (!t[index])
			return (NULL);
		s = s + calculate_length(s, c);
		index++;
	}
	t[index] = NULL;
	return (t);
}
