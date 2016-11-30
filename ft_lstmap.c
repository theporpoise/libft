/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 15:02:41 by mgould            #+#    #+#             */
/*   Updated: 2016/11/30 15:22:34 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*begin_list;

	newlist = NULL;
	begin_list = newlist;
	if (!lst)
		return NULL;

	begin_list = newlist;
	while(lst)
	{
		newlist = ft_lstnew(lst->content, lst->content_size);
		if (!newlist)
			return NULL;
		f(lst);
		newlist->content = lst->content;
		newlist->content_size = lst->content_size;
		lst = lst->next;
		newlist = newlist->next;
	}
	return (begin_list);
}
