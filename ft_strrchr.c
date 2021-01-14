/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 13:38:19 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/14 14:49:04 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
#include <string.h>


char	*ft_strrchr(const char *s, int c)
{
	int i;
	
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
int main()
{
	char *s = "bonjour";
	char c = 'b';
	char *ptr = strrchr(s, c);
	char *tmp = ft_strrchr(s, c);
	printf("offi = %s\n", ptr);
	printf("ft = %s\n", tmp);
	return 0;
} */
