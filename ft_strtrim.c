/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 12:42:57 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/11 18:09:46 by matt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sep(char curr, const char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (curr == set[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_nbsep(const char *s, const char *set)
{
	int i;
	int j;
	int nb;

	i = 0;
	nb = 0;
	if (!ft_strlen(s))
		return (0);
	j = ft_strlen(s) - 1;
	while (s[i] && ft_sep(s[i], set))
	{
		nb++;
		i++;
	}
	while (s[j] && ft_sep(s[j], set))
	{
		nb++;
		j--;
	}
	return (nb);
}

int		ft_pos(const char *s, const char *set)
{
	int j;

	if (!ft_strlen(s))
		return (0);
	j = ft_strlen(s) - 1;
	while (s[j] && ft_sep(s[j], set))
	{
		j--;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *res;
	int i;
	int j;
	int k;
	int len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	k = 0;
	len = ft_strlen(s1) - ft_nbsep(s1, set);
	if (len <= 0)
		len = 0;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (s1[i] && ft_sep(s1[i], set))
		i++;
	j = ft_pos(s1, set);
	while (s1[i] && i <= j)
	{
		res[k++] = s1[i++];
	}
	res[k] = '\0';
	return (res);
}
