/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafabre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:02:50 by cafabre           #+#    #+#             */
/*   Updated: 2024/11/14 12:09:09 by cafabre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s)
{
	char	*res;
	int		i;

	res = NULL;
	i = 0;
	while (s[i] != '0')
		i++;
	res = malloc(i * sizeof(char));
	if (res == NULL)
		return (res);
	while (s[i] != '0')
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}
