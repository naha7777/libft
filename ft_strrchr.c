/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacharp <anacharp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:35:47 by anacharp          #+#    #+#             */
/*   Updated: 2025/10/28 14:49:50 by anacharp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*d;

	d = (char *)s;
	while (*d != '\0')
		d++;
	while (*d != (char)c)
	{
		if (d == s)
			return (0);
		d--;
	}
	return ((char *)d);
}
