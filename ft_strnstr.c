/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 13:15:51 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/05 13:36:38 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int i;
	int j;
	int stop;

	stop = 0;
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0' || stop == n)
				return (str + i);
			j++;
			stop++;
		}
		i++;
	}
	return (0);
}

int main()
{
	char *str = "Foo Bar Baz";
	char *find = "Bar";
	char *ptr;
	char *tmp;
	ptr = strnstr(str, find, 0);
	tmp = strnstr(str, find, 0);
	printf("result = %s\n", ptr);
	printf("result2 = %s\n", tmp);
	return 0;
}
