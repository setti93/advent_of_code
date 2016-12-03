/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:39:52 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/06 17:15:29 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n-- && ft_tolower(*s1) == ft_tolower(*s2) && *s1 && *s2)
	{
		s1++;
		s2++;
		if (n == 0)
			return (1);
	}
	if (n == 0)
	{
		s1--;
		s2--;
	}
	if (ft_tolower(*s1) == ft_tolower(*s2))
		return (1);
	return (0);
}
