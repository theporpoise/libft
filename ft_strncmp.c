/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 19:13:57 by mgould            #+#    #+#             */
/*   Updated: 2016/11/30 20:34:24 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;
	int		dif;

	i = 0;
	dif = 0;
	while (s1[i] != '\0' && (i < n))
	{
		dif = s1[i] - s2[i];
		if (s2[i] == '\0' || (dif != 0))
			return ((unsigned char)dif);
		i++;
	}
	if (i >= n)
		return (0);
	else
		return ((unsigned char)(s2[i]));
}
