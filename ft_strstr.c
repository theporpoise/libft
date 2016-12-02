/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:24:49 by mgould            #+#    #+#             */
/*   Updated: 2016/12/02 10:10:58 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int flag;
	char *ptr;

	i = 0;
	flag = 0;
	ptr = NULL;
	if (!little[0])
		return (char *)big;
	else if (!big)
	{
		ptr[0] = big[0];
		return ptr;
	}
	while (big[i])
	{
		j = 0;
		flag = 0;
		while(little[j] && big[i + j])
		{
			if (little[j] == big[i + j])
				j++;
			else
			{
				flag = 1;
				break;
			}
		}
		if (!little[j] && flag == 0)
		{
			ptr = (char *)(big + i);
			return ptr;
		}
		i++;
	}
	return (ptr);
}
