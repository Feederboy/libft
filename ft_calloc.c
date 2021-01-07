/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 16:21:01 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/07 16:25:12 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void *ptr;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ptr = ft_bzero(ptr, count);
	return (ptr);
}
