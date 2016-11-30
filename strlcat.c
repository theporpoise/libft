/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:53:03 by mgould            #+#    #+#             */
/*   Updated: 2016/11/29 16:46:01 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (size == 0)
	{
		return size;
	}
	if (size < (ft_strlen(dst) -1))
	{
		return size;
	}
	while (src[i])
		i++;
	while (src[j] && (size - ft_strlen(dst) - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	src[i] = '\0';
	return (i);
}
