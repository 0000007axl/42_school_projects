/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 05:10:28 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/04 23:17:08 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*next;

	if (!*lst || !lst)
		return ;
	curr = *lst;
	while (curr)
	{
		next = curr->next;
		del(curr->content);
		free(curr);
		curr = next;
	}
	*lst = NULL;
}
