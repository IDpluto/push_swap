/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:28:59 by dohlee            #+#    #+#             */
/*   Updated: 2021/09/21 18:29:00 by dohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	cnt;

	cnt = 0;
	while (*(dest + cnt) && cnt < size)
		cnt++;
	while (*src && cnt + 1 < size)
	{
		*(dest + cnt) = *src;
		src++;
		cnt++;
	}
	if (cnt < size)
		*(dest + cnt) = 0;
	while (*src)
	{
		src++;
		cnt++;
	}
	return (cnt);
}
