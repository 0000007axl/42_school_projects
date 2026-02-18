/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:55:12 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/18 11:22:56 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*tmp;

	tmp = lst_pop_front(stack);
	lst_push_back(stack, tmp);
}

void	ra(t_list **a, t_ops_count *ops_count)
{
	rotate(a);
	write(1, "ra\n", 3);
	ops_count->ra++;
	ops_count->total_ops++;
}

void	rb(t_list **b, t_ops_count *ops_count)
{
	rotate(b);
	write(1, "rb\n", 3);
	ops_count->rb++;
	ops_count->total_ops++;
}

void	rr(t_list **a, t_list **b, t_ops_count *ops_count)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
	ops_count->rr++;
	ops_count->total_ops++;
}
