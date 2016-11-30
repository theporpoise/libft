/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:38:25 by mgould            #+#    #+#             */
/*   Updated: 2016/11/30 13:36:34 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		copy;
	char	*num;

	i = 0;
	len = 0;
	copy = n;
	if (copy < 0)
		len++;
	while (copy != 0)
	{
		len++;
		copy = copy / 10;
	}
	num = (char *)malloc(sizeof(char) * (len + 1));
	num[len + 1] = '\0';
	copy = n;
	if (copy < 0)
	{
		num[i] = '-';
		i++;
		copy = copy * -1;
	}
	while (copy != 0)
	{
		num[len] = ((copy % 10) + '0');
		copy = copy / 10;
		len--;
	}
	return (num);
}
