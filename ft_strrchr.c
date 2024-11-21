/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafabre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:52:10 by cafabre           #+#    #+#             */
/*   Updated: 2024/11/17 17:59:46 by cafabre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *str, int c)
{
	char			*last;
	unsigned char	uc;

	last = NULL;
	uc = (unsigned char)c;
	while (*str != '\0')
	{
		if (*str == uc)
			last = (char *)str;
		str++;
	}
	if (uc == '\0')
		return ((char *)str);
	return (last);
}
