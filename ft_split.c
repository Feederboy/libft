/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matt <maquentr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 23:55:13 by matt              #+#    #+#             */
/*   Updated: 2021/01/08 00:30:26 by matt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_taille_word(const char *s, char c)
{
	int len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

int		ft_sep(char curr, char c)
{
	return (curr == c);
}

int		ft_nbwords(const char *s, char c)
{
	int len;

	len = 0;
	while (*s)
	{
		if (ft_sep(*s, c)
			s++;
		else
			while (*s && !ft_sep(*s, c))
				++len;
	}
	return (len);
}

char	**ft_split(const char *s, char c)
{
	char **res;
	int i;
	int nb_words;
	int len;

	i = 0;
	if (!s)
		return (NULL)
	nb_words = ft_nbwords(s, c);
	res = (char**)malloc(sizeof(*res) * (nb_words + 1));
	if (!res)
		return (NULL);
	while (nb_words--)
	{
		while (*s && *s == c)
			s++;
		len = ft_taille_word(s, c);
		res[i] = ft_substr(s, 0, len);
		if (res[i] = '\0')
			return (NULL);
		s = s + ft_taille_word(s, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
