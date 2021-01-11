/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:19:06 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/11 17:18:51 by matt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>


int		ft_strlen_const(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int i;
	char e;

	i = ft_strlen_const(s) - 1;
	e = c + '0';
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
	char c = 'G';
	char *ptr = strchr(s, c);
	char *tmp = strchr(s, c);
	printf("result = %s\n", ptr);
	printf("result = %s\n", tmp);
	return 0;
}
