/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:19:06 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/11 21:50:26 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int i;
	unsigned char e;

	i = ft_strlen(s) - 1;
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
	const char *str = "salut comment bonjour";
	char *res;

	res = strchr(str, 98);
	printf("OFFI = %s\n", res);

	return (0);
}
