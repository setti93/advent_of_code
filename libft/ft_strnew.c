/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:54:04 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/06 19:03:05 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ret;

	if ((ret = (char*)malloc(sizeof(char) * (size + 1))))
	{
		while (size + 1)
			ret[size--] = '\0';
	}
	return (ret);
}
