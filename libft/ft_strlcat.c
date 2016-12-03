/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:53:29 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/06 10:53:30 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_out;
	size_t	cur;

	len_dest = ft_strlen(dst);
	len_out = ft_strlen(src) + len_dest;
	cur = 0;
	while (*src && cur < (size - len_dest - 1))
		dst[len_dest + cur++] = *src++;
	dst[len_dest + cur] = *src;
	if (len_out >= size || cur >= size - len_dest)
		return (size);
	else
		return (len_out);
}
