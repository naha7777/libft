/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacharp <anacharp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:21:32 by anacharp          #+#    #+#             */
/*   Updated: 2025/10/28 14:55:35 by anacharp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_ofn(int n)
{
	size_t	len;
	long	n2;

	n2 = n;
	len = 0;
	if (n2 <= 0)
	{
		len++;
		n2 *= -1;
	}
	while (n2 > 0)
	{
		n2 /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	lenn;
	int		i;
	long	n2;

	lenn = ft_len_ofn(n);
	str = malloc(lenn + 1);
	if (str == NULL)
		return (NULL);
	str[lenn] = '\0';
	n2 = n;
	if (n == 0)
		str[0] = '0';
	else if (n2 < 0)
	{
		n2 *= -1;
		str[0] = '-';
	}
	i = lenn - 1;
	while (i >= 0 && str[i] != '-')
	{
		str[i--] = (n2 % 10) + 48;
		n2 /= 10;
	}
	return (str);
}
