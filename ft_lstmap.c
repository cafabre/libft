/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafabre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:46:18 by cafabre           #+#    #+#             */
/*   Updated: 2024/11/18 13:54:55 by cafabre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list new_list;
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	new_list = (t_list *)malloc(i * sizeof(t_list));
	while (lst)
	{
		lst = lst->next;
		(*f)(lst->content)->next = new_list;
		if (!new_list)
		{
			(*del)(new_list);
			free(new_list);
		}
	}
	return (new_list);
}
