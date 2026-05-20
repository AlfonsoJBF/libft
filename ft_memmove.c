/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albustos <albustos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:36:12 by albustos          #+#    #+#             */
/*   Updated: 2026/05/20 18:44:24 by albustos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*s;
	unsigned char	*d;

	if (!dest  && !src)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (*s)

	return (dest);
}
