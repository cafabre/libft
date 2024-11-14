/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafabre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:54:28 by cafabre           #+#    #+#             */
/*   Updated: 2024/11/14 12:02:11 by cafabre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	int		total;
	int		i;
	char	*res;

	total = nmemb * size;
	i = 0;
	res = NULL;
	res = malloc(total * sizeof(char));
	while (i < nmemb)
	{
		res[i] = '0';
		i++;
	}
	return (res);
}
