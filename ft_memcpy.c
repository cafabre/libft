/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafabre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:49:06 by cafabre           #+#    #+#             */
/*   Updated: 2024/11/11 11:49:22 by cafabre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned const char *s = (unsigned const char *)src;
    size_t i;
    i = 0;
    while (i<n)
    {
        d[i] = s[i];
        i++;
    }
    return(dest);
}
