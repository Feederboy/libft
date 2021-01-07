/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 15:32:16 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/07 16:34:43 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *ss1;
	unsigned char *ss2;

	i = 0;
	ss1 = s1;
	ss2 = s2;
	while (ss1[i] && ss2[i] && i < n - 1)
	{
		if (ss1[i] != ss2[i])
			break ;
		i++;
	}
	return ((void*)ss1[i] - (void*)ss2[i]);
}

