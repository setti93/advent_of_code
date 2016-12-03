/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:53:43 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/06 10:53:45 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	len_dest;
	size_t	cur;

	len_dest = ft_strlen(dest);
	cur = 0;
	while (cur < n && *src)
		dest[len_dest + cur++] = *src++;
	dest[len_dest + cur] = '\0';
	return (dest);
}
