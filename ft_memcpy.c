/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:08:53 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/19 12:19:53 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	const char		*p;
	char			*q;

	i = 0;
	p = (const char *)src;
	q = (char *)dst;
	while (i < n)
	{
		q[i] = p[i];
		i++;
	}
	return (dst);
}
