/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:24:08 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/06 17:27:55 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	if ((newstr = ft_strnew(size)))
	{
		ft_strcat(newstr, s1);
		ft_strcat(newstr, s2);
	}
	return (newstr);
}
