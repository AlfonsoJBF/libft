/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfonsojbf <albustos@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:10:27 by alfonsojbf        #+#    #+#             */
/*   Updated: 2026/05/08 17:58:55 by alfonsojbf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	while(ft_isspace(ptr[i]))
		i++;
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(ptr[i]))
	{
		result = result * 10 + (ptr[i] - 48);
		i++;
	}
	return (result * sign);
}
