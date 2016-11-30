/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 07:54:17 by mgould            #+#    #+#             */
/*   Updated: 2016/11/30 08:39:34 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *copy;
	int i;

	i = 0;
	copy = ft_strdup(s);
	while (copy[i])
	{
		copy[i] = f(i, copy[i]);
		i++;
	}
	return (copy);
}
