/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:50:07 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/06 10:50:09 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mem1;
	unsigned char	*mem2;

	if (n == 0)
		return (0);
	mem1 = (unsigned char*)s1;
	mem2 = (unsigned char*)s2;
	while (n && *mem1++ == *mem2++)
		n--;
	return (*mem1 - *mem2);
}
