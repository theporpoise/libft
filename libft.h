/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 11:38:24 by mgould            #+#    #+#             */
/*   Updated: 2016/11/29 15:45:14 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// can only use malloc, free, and write functions.  can also use string.h header file.

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

char *ft_strdup(const char *s1);
char *ft_strcpy(char *dst, const char *src);
char *ft_strncpy(char *dst, const char *src, size_t len);
char *ft_strcat(char *s1, const char *s2);
char *ft_strncat(char *s1, const char *s2, size_t n);

#endif













