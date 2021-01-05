/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:39:11 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/05 16:49:11 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t i;
	char *p;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
	return (s);
}

int main()
{
	char str[50];
	char tmp[50];
	strcpy(str, "This is string.h library function");
	strcpy(tmp, "This is string.h library function !!!!!");
	puts(str);
	puts(tmp);
	bzero(str, 7);
	bzero(tmp, 7);
	puts(str);
	puts(tmp);

	return (0);
}
