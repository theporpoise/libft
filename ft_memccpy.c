/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 20:37:36 by mgould            #+#    #+#             */
/*   Updated: 2016/11/29 20:49:49 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
		if (src[i-1] == c)
			return (ptr = &src[i]);
	}
	return (ptr);
}
