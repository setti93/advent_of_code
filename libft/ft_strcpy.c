/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:52:43 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/06 10:52:45 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	cur;

	cur = 0;
	while (src[cur])
	{
		dest[cur] = src[cur];
		cur++;
	}
	dest[cur] = '\0';
	return (dest);
}
