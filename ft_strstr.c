/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:24:49 by mgould            #+#    #+#             */
/*   Updated: 2016/11/30 20:34:48 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int flag;
	char *ptr;

	i = 0;
	flag = 0;
	ptr = NULL;
	if (!little)
		return (char *)big;
	while (big[i])
	{
		j = 0;
		flag = 0;
		while(little[j])
		{
			if (little[j] == big[i])
			{
				j++;
				continue;
			}
			flag = 1;
			j++;
		}
		if (little[j] == '\0' && flag == 0)
		{
			ptr = (char *)(big + i);
			return ptr;
		}
		i++;
	}
	return (ptr);
}
