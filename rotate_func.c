/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:55:12 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/20 13:00:10 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*tmp;

	tmp = lst_pop_front(stack);
	lst_push_back(stack, tmp);
}

void	ra(t_list **a, t_ops_count *ops_count, t_ops **ops)
{
	rotate(a);
	lst_add_ops_back(ops, "ra");
	ops_count->ra++;
	ops_count->total_ops++;
}

void	rb(t_list **b, t_ops_count *ops_count, t_ops **ops)
{
	rotate(b);
	lst_add_ops_back(ops, "rb");
	ops_count->rb++;
	ops_count->total_ops++;
}

void	rr(t_list **a, t_list **b, t_ops_count *ops_count, t_ops **ops)
{
	rotate(a);
	rotate(b);
	lst_add_ops_back(ops, "rr");
	ops_count->rr++;
	ops_count->total_ops++;
}
