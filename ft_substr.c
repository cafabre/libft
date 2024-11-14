/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafabre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:09:49 by cafabre           #+#    #+#             */
/*   Updated: 2024/11/14 12:16:18 by cafabre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;
	unsigned int	j;

	res = NULL;
	i = 0;
	while (s[start + i] != '0' && i < len)
		i++;
	res = malloc(i * sizeof(char));
	if (res == NULL)
		return (res);
	j = 0;
	while (j < i)
	{
		res[j] = s[start + j];
		j++:
	}
	return (res);
}
