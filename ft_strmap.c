/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 07:46:36 by mgould            #+#    #+#             */
/*   Updated: 2016/12/02 13:10:49 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*copy;
	size_t		i;
	size_t		j;

	if (s && f)
	{
		i = 0;
		j = ft_strlen((char *)s);
		copy = (char *)malloc(sizeof(copy) * (j + 1));
		if (!copy)
			return (NULL);
		copy[j] = '\0';
		while (s[i] != 0)
		{
			copy[i] = f(s[i]);
			i++;
		}
		return (copy);
	}
	return (NULL);
}
