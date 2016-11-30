/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 08:47:55 by mgould            #+#    #+#             */
/*   Updated: 2016/11/30 08:56:05 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int 	len;
	char	*join;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	join = (char *)malloc(size_of(char) * (len + 1));
	while (s1[i])
		join[i] = s1[i];
	i = 0;
	while (s2[i])
		join[i + ft_strlen(s1)] = s2[i];
	join[len + 1] = '\0';
	return (join);
}
