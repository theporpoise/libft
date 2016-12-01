/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:07:44 by mgould            #+#    #+#             */
/*   Updated: 2016/11/30 19:36:24 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

static char	*make_word(char *s, char c)
{
	int 	i;
	char	*word;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**arfresh;
	char	*ptrs;

	ptrs = (char *)s;
	arfresh = NULL;
	i = 0;
	while (ptrs)
	{
		if (*ptrs == c)
		{
			ptrs++;
			continue;
		}
		else
		{
			arfresh[i] = make_word(ptrs, c);
			ptrs += (ft_strlen(arfresh[i]) - 1);
			i++;
		}
	}
	return (arfresh);
}
