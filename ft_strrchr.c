/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:21:36 by mgould            #+#    #+#             */
/*   Updated: 2016/11/29 19:02:23 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char *ps;

	ps = NULL;
	while (s*)
	{
		if (s* == c)
		{
			ps = s;
		}
		s++;
	}
	if (c == '\0' && s* == '\0')
	{
		return (s);
	}
	return (ps);
}