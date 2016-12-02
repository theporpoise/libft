/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 21:06:37 by mgould            #+#    #+#             */
/*   Updated: 2016/12/01 12:47:04 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sptr;
	unsigned char	newc;

	sptr = (unsigned char *)s;
	newc = (unsigned char)c;
	while (*sptr && n)
	{
		if (*sptr == newc)
			return (sptr);
		sptr++;
		n--;
	}
	if (*sptr == newc)
		return (sptr);
	return (NULL);
}
