/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 17:32:28 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/14 15:54:48 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *res;

	i = 0;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
	{
		res[i] = '\0';
		return (res);
	}
	while (i < len && s[start])
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
