/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:25:46 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/05 16:37:10 by maquentr         ###   ########.fr       */
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

int main()
{
	char str[50];
	char tmp[50];
	strcpy(str, "This is string.h library function");
	strcpy(tmp, "This is string.h library function !!!!!");
	puts(str);
	puts(tmp);
	memset(str, '$', 7);
	memset(tmp, '$', 7);
	puts(str);
	puts(tmp);

	return (0);
}
