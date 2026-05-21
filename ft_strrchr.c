/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfonsojbf <albustos@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 00:51:16 by alfonsojbf        #+#    #+#             */
/*   Updated: 2026/05/20 00:51:26 by alfonsojbf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	ch = (char)c;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
