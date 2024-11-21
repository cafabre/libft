/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafabre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:52:48 by cafabre           #+#    #+#             */
/*   Updated: 2024/11/15 02:37:39 by cafabre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		value;
	size_t				i;

	p = (const unsigned char *)ptr;
	value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == value)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
