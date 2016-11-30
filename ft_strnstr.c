/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:47:29 by mgould            #+#    #+#             */
/*   Updated: 2016/11/29 19:04:43 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;
	int flag;
	char *ptr;

	i = 0;
	flag = 0;
	ptr = NULL;
	if (!little)
		return big;
	while (big[i] && (i < len))
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
			ptr = &big[i];
			return ptr;
		}
		i++;
	}
	return (ptr);
}
