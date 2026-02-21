/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 17:15:40 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/21 09:37:05 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_list	*lst_new(int value)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst->value = value;
	lst->next = NULL;
	return (lst);
}

t_list	*lst_clear(t_list **lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	while (*lst != NULL)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		tmp->next = NULL;
		free(tmp);
	}
	*lst = NULL;
	return (*lst);
}
