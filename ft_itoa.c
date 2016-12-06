/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:38:25 by mgould            #+#    #+#             */
/*   Updated: 2016/12/05 20:26:48 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_mnbr(char *num, int len, int n)
{
	long	copy;
	int		i;

	i = 0;
	copy = n;
	num[len] = '\0';
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
}

static char	*ft_getz(char *num)
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

char	*ft_itoa(int n)
{
	int			len;
	long		copy;
	char		*num;

	len = 0;
	num = NULL;
	copy = n;
	if (n == 0)
	{
		if ((num = ft_getz(num)))
			return (num);
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
	ft_mnbr(num, len, n);
	return (num);
}
