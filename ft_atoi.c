/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 13:59:06 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/05 13:59:09 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int r;

	i = 0;
	sign = 0;
	r = 0;
	while (str[i] && (str[i] == '\t' || str[i] == '\r' || str[i] == '\n' ||
				str[i] == '\v' || str[i] == '\f' || str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	if (sign % 2 == 1)
		return (-r);
	else
		return (r);
}
