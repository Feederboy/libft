/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:08:53 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/05 17:26:36 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

/*
 *
 *
 *
 *				TO BE CORRECTED
 *
 *
 *
 */


void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	const char *p;
	char *q;

	i = 0;
	p = src;
	q = dst;
	while (i < n)
	{
		q[i] = p[i];
		i++;
	}
	return (dst);
}

int main()
{

	char original[50];
	char newcopy[50];

	strcpy(original, "C memcpy at Tech0nTheNet.com");
	puts(newcopy);
	memcpy(newcopy, original, 24);
	newcopy[24] = 0;
	puts(newcopy);


	return (0);
}
