/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacharp <anacharp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:43:34 by anacharp          #+#    #+#             */
/*   Updated: 2025/10/31 10:39:34 by anacharp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_freeall(char **tab, int i)
{
	while (i >= 0)
		free(tab[i--]);
	free(tab);
	return (NULL);
}

static int	ft_countwords(char const *s, char c)
{
	size_t	i;

	if (!s || !*s)
		return (0);
	while (*s == c)
		s++;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;
	int		wordstart;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	wordstart = 0;
	while (i < ft_countwords(s, c))
	{
		while (s[j++] == c)
			wordstart = j;
		while (s[j] && s[j] != c)
			j++;
		tab[i] = ft_substr(s, wordstart, (j - wordstart));
		if (!tab[i])
			return (ft_freeall(tab, i));
		i++;
	}
	return (tab[i] = 0, tab);
}
