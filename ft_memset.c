/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafabre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:48:28 by cafabre           #+#    #+#             */
/*   Updated: 2024/11/11 11:48:38 by cafabre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *) s;
    size_t i;
    i = 0;
    while (i<n)
    {
        ptr[i]=(unsigned char)c;
        i++;
    }
    return (s);
}
