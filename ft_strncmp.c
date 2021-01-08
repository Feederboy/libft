/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 14:00:34 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/05 14:00:36 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	
	if (n < 1)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i < n - 1)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char) s2[i]);
}