/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:31:52 by dohlee            #+#    #+#             */
/*   Updated: 2020/11/25 15:16:21 by dohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			i++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (i);
}

static char	*word_dup(const char *s, int x, int y)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((y - x + 1) * sizeof(char));
	while (x < y)
		word[i++] = s[x++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *s, char c)
{
	size_t	i;
	size_t	j;
	int		idx;
	char	**split;

	i = -1;
	j = 0;
	idx = -1;
	split = malloc((word_count(s, c) + 1) * sizeof(*split));
	if (!split)
		return (NULL);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && idx < 0)
			idx = i;
		else if ((s[i] == c || i == ft_strlen(s)) && idx >= 0)
		{
			split[j++] = word_dup(s, idx, i);
			idx = -1;
		}
	}
	split[j] = NULL;
	return (split);
}
