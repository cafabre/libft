/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafabre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:52:48 by cafabre           #+#    #+#             */
/*   Updated: 2024/11/11 11:52:59 by cafabre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *ptr, int c, size_t n)
{
    const unsigned char *p = (const unsigned char *)ptr;
    unsigned char value = (unsigned char)c;
    size_t i;
    i = 0;
    while(i<n)
    {
        if (p[i]==value)
            return((void *)&p[i]);
        i++;
    }
    return(NULL);
}
