/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:07:44 by mgould            #+#    #+#             */
/*   Updated: 2016/12/04 18:52:19 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

static char	*make_word(char *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	wc(char *s, char c)
{
	int	i;
	int flag;
	int	words;

	i = 0;
	flag = 0;
	words = 0;
	while (s[i])
	{
		if ((s[i] != c) && flag == 0)
		{
			flag = 1;
			words += 1;
		}
		else if (s[i] == c)
		{
			flag = 0;
		}
		i++;
	}
	return (words);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**arfresh;
	char	*ptrs;

	if (!s)
		return (NULL);
	ptrs = (char *)s;
	arfresh = (char **)malloc(sizeof(char**) * (wc(ptrs, c) + 1));
	if (!arfresh)
		return (NULL);
	i = 0;
	while (*ptrs)
	{
		if (*ptrs == c)
		{
			ptrs++;
			continue;
		}
		else
		{
			arfresh[i] = make_word(ptrs, c);
			ptrs += (ft_strlen(arfresh[i]));
			i++;
		}
	}
	arfresh[i] = (NULL);
	return (arfresh);
}
