/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:36:20 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/20 12:59:21 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **stack_pop, t_list **stack_push)
{
	t_list	*tmp;

	tmp = lst_pop_front(stack_pop);
	lst_push_front(stack_push, tmp);
}

void	pa(t_list **a, t_list **b, t_ops_count *ops_count, t_ops **ops)
{
	push(b, a);
	lst_add_ops_back(ops, "pa");
	ops_count->pa++;
	ops_count->total_ops++;
}

void	pb(t_list **a, t_list **b, t_ops_count *ops_count, t_ops **ops)
{
	push(a, b);
	lst_add_ops_back(ops, "pb");
	ops_count->pb++;
	ops_count->total_ops++;
}
