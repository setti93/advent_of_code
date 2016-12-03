/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:51:10 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/06 10:51:35 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	size_t	cur;
	char	*from;
	char	*to;

	from = (char*)src;
	to = (char*)dest;
	if ((temp = (char*)malloc(sizeof(char) * n)))
	{
		cur = 0;
		while (cur < n)
			temp[cur++] = *from++;
		cur = 0;
		while (cur < n)
		{
			to[cur] = temp[cur];
			cur++;
		}
		free(temp);
	}
	return (dest);
}
