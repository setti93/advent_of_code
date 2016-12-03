/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:49:46 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/06 10:49:53 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*from;
	char	*to;

	from = (char*)src;
	to = (char*)dest;
	while (n--)
	{
		if (*from == c)
			break ;
		*to++ = *from++;
	}
	return (dest);
}
