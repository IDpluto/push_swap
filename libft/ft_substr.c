/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:30:10 by dohlee            #+#    #+#             */
/*   Updated: 2021/09/21 18:30:11 by dohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*dst;

	s_len = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	while (*(s + (i + start)) && i < len)
		i++;
	dst = ft_calloc(sizeof(char), i + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (*(s + (i + start)) && i < len)
	{
		*(dst + i) = *(s + (i + start));
		i++;
	}
	if (s_len <= start)
	{
		dst[0] = 0;
		return (dst);
	}
	return (dst);
}
