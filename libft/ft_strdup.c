/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:28:37 by dohlee            #+#    #+#             */
/*   Updated: 2021/09/21 18:28:38 by dohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;

	ret = (char *)malloc(ft_strlen(s1) + 1);
	if (!ret)
		return (0);
	ft_memcpy(ret, s1, ft_strlen(s1) + 1);
	return (ret);
}
