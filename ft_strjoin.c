/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafabre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:18:22 by cafabre           #+#    #+#             */
/*   Updated: 2024/11/14 12:25:44 by cafabre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char const s)
{
	int	i;

	i = 0;
	while (s[i] != '0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char const	*res;
	int			res_size;
	int			i;
	int			j;

	i = 0;
	j = 0;
	res_size = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(res_size * sizeof(char));
	if (res == NULL)
		return (res);
	while (s1[i] != 0)
		res[i] = s1[i];
	while (s2[j] != 0)
		res[i + j] = s2[j];
	return (res);
}
