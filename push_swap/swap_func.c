/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:50:01 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/25 09:29:35 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list *stack)
{
	int	tmp;

	if (stack == NULL || stack->next == NULL)
		return ;
	tmp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = tmp;
}

void	sa(t_list *a, t_ops_count *ops_count, t_ops **ops)
{
	swap(a);
	lst_add_ops_back(ops, "sa");
	ops_count->sa++;
	ops_count->total_ops++;
}

void	sb(t_list *b, t_ops_count *ops_count, t_ops **ops)
{
	swap(b);
	lst_add_ops_back(ops, "sb");
	ops_count->sb++;
	ops_count->total_ops++;
}

void	ss(t_list *a, t_list *b, t_ops_count *ops_count, t_ops **ops)
{
	swap(a);
	swap(b);
	lst_add_ops_back(ops, "ss");
	ops_count->ss++;
	ops_count->total_ops++;
}
