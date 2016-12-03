/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 17:33:04 by mgould            #+#    #+#             */
/*   Updated: 2016/12/02 19:12:12 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	int		k;
	char	*value;

	i = 0;
	k = 0;
	//printf("start\n");
	if (!s)
	{
		//printf("protection triggered\n");
		return (NULL);
	}
	len = strlen(s) - 1;
	while(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
		//printf("%d,", i);
	}
	if (s[i] == '\0')
	{
		value = (char *)malloc(sizeof(value) * 1);
	   	value[0] = '\0';
		//printf("string is all whitespace");
		return (value);
	}
	while((s[len] == ' ') || (s[len] == '\n') || (s[len] == '\t'))
	{
		len--;
		//printf("%d,", len);
	}
	if (!(value = malloc((len - i + 2)))) //sizeof(value) * (len - i + 3))))
	{
		//printf("no malloc returned\n");
		return (NULL);
	}
	//printf("\nl:%d, i:%d, len:%d, mal:%zu k:%d\n", len, i, (len-i+ 3), sizeof(value), k);
	while(i <= len)
	{
		value[k] = s[i];
		k++;
   		i++;
	}
	//printf("\nl:%d, i:%d, len:%d, mal:%zu k:%d\n", len, i, (len-i+ 3), sizeof(value), k);
	value[k] = '\0';
	//printf("\nl:%d, i:%d, len:%d, mal:%lu k:%d\n", len, i, (len-i+ 3), strlen(value), k);
	return (value);
}

