/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 07:46:36 by mgould            #+#    #+#             */
/*   Updated: 2016/11/30 07:59:02 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *copy;
	int i;

	i = 0;
	copy = ft_strdup(s);
	while (copy[i])
	{
		copy[i] = f(copy[i]);
	}
	return (copy);
}
