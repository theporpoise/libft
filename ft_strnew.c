/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 07:30:57 by mgould            #+#    #+#             */
/*   Updated: 2016/11/30 20:30:55 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char *str;

	i = 0;
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return str;
}
