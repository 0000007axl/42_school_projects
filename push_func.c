/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:36:20 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/18 11:22:40 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **stack_pop, t_list **stack_push)
{
	t_list	*tmp;

	tmp = lst_pop_front(stack_pop);
	lst_push_front(stack_push, tmp);
}

void	pa(t_list **a, t_list **b, t_ops_count *ops_count)
{
	push(b, a);
	write(1, "pa\n", 3);
	ops_count->pa++;
	ops_count->total_ops++;
}

void	pb(t_list **a, t_list **b, t_ops_count *ops_count)
{
	push(a, b);
	write(1, "pb\n", 3);
	ops_count->pb++;
	ops_count->total_ops++;
}
