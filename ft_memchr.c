/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 15:01:04 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/07 15:05:51 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	unsigned char *s;

	i = 0;
	s = str;
	while (i < n)
	{
		if (s[i] = (unsigned char)c)
			return (void)(s[i]);
		i++;
	}
	return (NULL);
}

