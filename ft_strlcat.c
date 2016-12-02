/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:20:13 by mgould            #+#    #+#             */
/*   Updated: 2016/12/01 21:05:44 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(dst);
	while (src[i] && (j < size))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (j == size)
	{
		dst[j - 1] = '\0';
		return (ft_strlen(dst) + ft_strlen((char *)src));
	}
	else if (src[i] == '\0')
	{
		dst[j] = '\0';
		return (ft_strlen(dst) + ft_strlen((char *)src));
	}
	return (size + ft_strlen((char *)src));
}
