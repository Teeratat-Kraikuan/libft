/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkraikua <tkraikua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:02:08 by tkraikua          #+#    #+#             */
/*   Updated: 2022/02/16 19:02:08 by tkraikua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*next_newlst;
	t_list	*next_lst;

	newlst = ft_lstnew((*f)(lst->content));
	if (newlst == NULL)
		return (NULL);
	next_newlst = newlst;
	next_lst = lst->next;
	while (next_lst != NULL)
	{
		next_newlst = ft_lstnew((*f)(next_lst->content));
		if (next_newlst == NULL)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		next_lst = next_lst->next;
		next_newlst = next_newlst->next;
	}
	return (newlst);
}
