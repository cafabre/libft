/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafabre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:54:28 by cafabre           #+#    #+#             */
/*   Updated: 2024/11/18 22:58:54 by cafabre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t n, size_t s)
{
	void	*res;

	res = malloc(n * s);
	if (!res)
		return (NULL);
	ft_memset(res, 0, n * s);
	return (res);
}
