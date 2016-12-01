/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 10:12:55 by mgould            #+#    #+#             */
/*   Updated: 2016/11/30 18:40:51 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	int		last;
	char	*fresh;

	i = 0;
	j = 0;
	k = 0;
	last = ft_strlen((char *)s) - 1;
	while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while(s[last - j] == ' ' || s[last - j] == '\t' || s[last - j] == '\n')
		j++;
	fresh = (char *)malloc(sizeof(char) * ((last + 1) - i - j));
	while(i < (last - j))
	{
		fresh[k] = s[i];
		i++;
		k++;
	}
	fresh[k] = '\0';
	return (fresh);
}
