/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:44:54 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/06 10:47:17 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *nbr)
{
	unsigned int	value;
	int				sign;

	while (*nbr == '\t' || *nbr == '\n' || *nbr == ' ')
		nbr++;
	if (*nbr == '-')
		sign = -1;
	else
		sign = 1;
	if (*nbr == '-' || *nbr == '+')
		nbr++;
	value = 0;
	while (*nbr >= '0' && *nbr <= '9')
	{
		value *= 10;
		value += *nbr++ - '0';
	}
	return (value * sign);
}
