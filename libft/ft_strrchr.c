/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:54:18 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/06 10:54:20 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	size_t	index;
	char	*res;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			res = (s + index++);
	}
	if (s[index] == '\0')
	{
		if (c == '\0')
			res = s + index;
		else
			res = 0;
	}
	return (res);
}
