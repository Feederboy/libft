/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matt <maquentr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:22:03 by matt              #+#    #+#             */
/*   Updated: 2021/01/15 16:44:55 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	t_list *tmp;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
int main()
{
	t_list *elem;
	t_list *elem2;
	t_list *elem3;
	t_list *elem4;
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
	printf("\nlst clear\n");
	ft_lstclear(&elem3, ft_del);
	printf("\nlst clear\n");
	while (elem)
	{
		printf("%s -> ", elem->content);
		elem = elem->next;
	}
	return (0);
}
*/
