/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:13:22 by trakotos          #+#    #+#             */
/*   Updated: 2026/03/03 14:25:09 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_ops	*lst_clear_ops(t_ops **lst)
{
	t_ops	*tmp;

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

void	push_swap(t_list **a, t_list **b, t_ops_count *ops_count, t_flags flags)
{
	t_ops	*lst_ops;

	lst_ops = NULL;
	if (*a == NULL)
		return ;
	if ((*a)->next == NULL)
		return ;
	if (flags.alg_choice == 0 || lst_size(*a) <= 5)
		adaptive_sort(a, b, ops_count, &lst_ops);
	else if (flags.alg_choice == 1)
		simple_sort(a, b, ops_count, &lst_ops);
	else if (flags.alg_choice == 2)
		medium_sort(a, b, ops_count, &lst_ops);
	else if (flags.alg_choice == 3)
		complex_sort(a, b, ops_count, &lst_ops);
	print_ops(lst_ops);
	lst_clear_ops(&lst_ops);
}
