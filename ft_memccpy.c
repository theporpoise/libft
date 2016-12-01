/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 20:37:36 by mgould            #+#    #+#             */
/*   Updated: 2016/11/30 20:40:44 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = NULL;
	while (i < n)
	{
		*(((unsigned char *)dst) + i) = *(((unsigned char*)src) + i);
		i++;
		if (*(((unsigned char *)src) + i - 1) == c)
			return (ptr = ((unsigned char *)src + i));
	}
	return ((unsigned char *)ptr);
}
