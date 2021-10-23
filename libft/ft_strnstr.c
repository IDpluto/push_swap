/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:29:42 by dohlee            #+#    #+#             */
/*   Updated: 2021/09/21 18:29:43 by dohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;

	if (*h)
		;
	if (*n == '\0')
		return ((char *)h);
	i = ft_strlen(n);
	while (i <= len)
	{
		if (!ft_strncmp(h, n, i))
			return ((char *)h);
		len--;
		h++;
	}
	return (NULL);
}
