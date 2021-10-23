/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:25:12 by dohlee            #+#    #+#             */
/*   Updated: 2021/09/21 18:25:13 by dohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_l;

	n_l = malloc(sizeof(t_list));
	if (!n_l)
		return (NULL);
	n_l->content = content;
	n_l->next = NULL;
	return (n_l);
}
