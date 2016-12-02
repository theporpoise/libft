/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:20:13 by mgould            #+#    #+#             */
/*   Updated: 2016/12/01 17:30:27 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = sizeof(src);
	j = 0;
	if (size == 0)
	{
		return size;
	}
	if (size < (size_t)(ft_strlen(dst) - 1))
	{
		return size;
	}
	while (src[j] && (size_t*)(size - ft_strlen(dst) - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i);
}
