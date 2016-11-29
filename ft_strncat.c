/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeveze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 22:47:33 by edeveze           #+#    #+#             */
/*   Updated: 2016/11/11 20:48:43 by edeveze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = ft_strlen(s1);
	while (*s2 && n)
	{
		s1[len++] = *s2++;
		n--;
	}
	s1[len] = '\0';
	return (s1);
}