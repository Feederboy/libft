/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:25:46 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/11 20:45:29 by matt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char *p;
	size_t i;

	i = 0;
	p = str;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
