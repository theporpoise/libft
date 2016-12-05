/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 18:20:35 by mgould            #+#    #+#             */
/*   Updated: 2016/12/04 18:24:39 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

t_list	*ft_lstmap(t_list	*lst, t_list *(*f)(t_list *elem))
{
	//printf("top\n");
	//printf("%s\n", lst->content);
	printf("%s\n", f(lst)->content);

	return (lst);
}
