/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_manager.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 09:10:07 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/11 10:10:19 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_push_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}

t_list	*lst_pop_back(t_list **lst)
{
	t_list	*l;
	t_list	*iter;

	if (*lst == NULL)
		return (NULL);
	if ((*lst)->next == NULL)
	{
		l = *lst;
		*lst = (*lst)->next;
		return (l);
	}
	iter = *lst;
	while (iter->next->next != NULL)
		iter = iter->next;
	l = iter->next;
	iter->next = NULL;
	return (l);
}
