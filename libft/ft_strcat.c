/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:51:52 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/06 10:52:03 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	cur;

	cur = ft_strlen(dest);
	while (*src)
		dest[cur++] = *src++;
	dest[cur] = '\0';
	return (dest);
}
