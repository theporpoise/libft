/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:38:25 by mgould            #+#    #+#             */
/*   Updated: 2016/12/04 18:44:00 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int			i;
	int			len;
	long		copy;
	char		*num;

	i = 0;
	len = 0;
	num = NULL;
	copy = n;
	if (n == 0)
	{
		if ((num = (char *)malloc(sizeof(char) * (2))))
		{
			num[0] = '0';
			num[1] = '\0';
			return (num);
		}
		else
			return (NULL);
	}
	if (copy < 0)
		len++;
	while (copy != 0)
	{
		len++;
		copy = copy / 10;
	}
	if (!(num = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	num[len] = '\0';
	copy = n;
	if (copy < 0)
	{
		num[i] = '-';
		i++;
		copy = copy * -1;
	}
	while (copy != 0)
	{
		len--;
		num[len] = ((copy % 10) + '0');
		copy = copy / 10;
	}
	return (num);
}
