/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 14:00:19 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/07 16:50:47 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t len;
	size_t i;

	i = 0;
	while ((src[i]) && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	len = 0;
	while (src[len])
		len++;
	return (len);
}
