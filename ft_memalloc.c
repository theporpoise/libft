/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 07:08:59 by mgould            #+#    #+#             */
/*   Updated: 2016/11/30 07:15:24 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void *ft_memalloc(size_t size)
{
	void	*memspace;

	memspace = malloc(size);
	bzero(memspace, size);
	return (memspace);
}
