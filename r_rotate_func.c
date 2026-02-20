/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate_func.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:00:23 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/20 13:01:06 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*tmp;

	tmp = lst_pop_back(stack);
	lst_push_front(stack, tmp);
}

void	rra(t_list **a, t_ops_count *ops_count, t_ops **ops)
{
	reverse_rotate(a);
	lst_add_ops_back(ops, "rra");
	ops_count->rra++;
	ops_count->total_ops++;
}

void	rrb(t_list **b, t_ops_count *ops_count, t_ops **ops)
{
	reverse_rotate(b);
	lst_add_ops_back(ops, "rrb");
	ops_count->rrb++;
	ops_count->total_ops++;
}

void	rrr(t_list **a, t_list **b, t_ops_count *ops_count, t_ops **ops)
{
	reverse_rotate(a);
	reverse_rotate(b);
	lst_add_ops_back(ops, "rrr");
	ops_count->rrr++;
	ops_count->total_ops++;
}
