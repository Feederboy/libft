/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 13:15:51 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/13 17:49:21 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t i;
	size_t j;
	size_t stop;

	stop = 0;
	i = 0;
	if (!str || !to_find)
		return (NULL);
	if (to_find[0] == '\0')
		return (char *)(str);
	while (str[i] && i < n)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] == str[i + j] && i + j < n)
			{
				if (to_find[j + 1] == '\0')
					return (char *)(str + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char *str = "lorem ipsum dolor sit amet";
	char *find = "dolor";
	char *ptr;
	char *tmp;
	ptr = strnstr(str, find, 15);
	tmp = ft_strnstr(str, find, 15);
	printf("OFFI = %s\n", ptr);
	printf("ft = %s\n", tmp);
	return 0;
} */
