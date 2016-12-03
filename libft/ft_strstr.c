/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:54:34 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/06 10:54:36 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *src, char *to_find)
{
	size_t	outer;
	size_t	inner;
	int		found;

	outer = 0;
	while (src[outer])
	{
		found = 1;
		inner = 0;
		while (to_find[inner])
		{
			if (src[outer + inner] != to_find[inner])
			{
				found = 0;
				break ;
			}
			inner++;
		}
		if (found)
			return (src + outer);
		outer++;
	}
	return (0);
}
