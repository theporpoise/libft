/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 08:32:30 by mgould            #+#    #+#             */
/*   Updated: 2016/11/30 08:45:31 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int i;
	char *substr;

	i = 0;
	substr = (char *)malloc(len);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}
