/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 13:38:19 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/05 16:18:39 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
#include <string.h>


char	*ft_strrchr(const char *s, int c)
{
	int i;
	char e;

	e = c + '0';
	i = strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == e)
			return (char *)(s + i);
		i--;
	}
	return (NULL);
}

int main()
{
	char *s = "Geeks for Geeks";
	char c = 's';
	char *ptr = strrchr(s, c);
	char *tmp = strrchr(s, c);
	printf("result = %s\n", ptr);
	printf("result = %s\n", tmp);
	return 0;
}
