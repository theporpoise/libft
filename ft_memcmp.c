/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 21:03:04 by mgould            #+#    #+#             */
/*   Updated: 2016/11/30 19:11:04 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t 			i;
	unsigned char	dif;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	dif = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n)
	{
		dif = ptr1[i] - ptr2[i];
		if (dif != 0)
			return (dif);
		i++;
	}
	return (0);
}
