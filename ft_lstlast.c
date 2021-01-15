/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:09:18 by maquentr          #+#    #+#             */
/*   Updated: 2021/01/15 17:41:02 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{

	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int main()
{
	t_list *elem;
	t_list *elem2;
	t_list *elem3;
	t_list *elem4;
	t_list *res;
	char	*str = "lorem";
	char	*str2 = "ipsum";
	char	*str3 = "dolor";
	char	*str4 = "sit";

	elem = ft_lstnew(str);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);
	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	elem4->next = NULL;
	while (elem)
	{
		printf("%s -> ", elem->content);
		elem = elem->next;
	}
	res = ft_lstlast(elem);
	printf("\n%s\n", res->content);
	//printf("\n%s\n", ft_lstlast(elem)->content);
	return (0);
} */
