/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafabre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:55:52 by cafabre           #+#    #+#             */
/*   Updated: 2024/11/14 15:34:31 by cafabre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		res_len;
	int		i;
	int		j;
	int		k;

	res_len = 0;
	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			res_len++;
		i++;
	}
	res = (char **)malloc(res_len * sizeof(char *) + 1);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < res_len; i++)
		res[i] = (char *)malloc(ft_strlen(s) * sizeof(char));
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			k = 0;
			j++;
		}
		else
		{
			*res[j][k] = s[i];
			k++;
		}
		i++;
	}
	return (res);
}
