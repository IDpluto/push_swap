/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:26:24 by dohlee            #+#    #+#             */
/*   Updated: 2021/09/21 18:26:25 by dohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*((char *)s1) != *((char *)s2))
			return ((unsigned char)*(char *)s1 - (unsigned char)*(char *)s2);
		s1++;
		s2++;
	}
	return (0);
}
