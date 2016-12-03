/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:53:59 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/06 10:54:01 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	cur;

	cur = 0;
	while (cur < n && *src)
		dest[cur++] = *src++;
	while (cur < n)
		dest[cur++] = '\0';
	return (dest);
}
