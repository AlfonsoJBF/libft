/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfonsojbf <albustos@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 22:27:17 by alfonsojbf        #+#    #+#             */
/*   Updated: 2026/05/23 23:47:36 by alfonsojbf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)	
		return ;
	i = 0;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
