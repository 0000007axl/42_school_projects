/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:36:20 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/16 16:49:26 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **stack_pop, t_list **stack_push)
{
	t_list	*tmp;

	tmp = lst_pop_front(stack_pop);
	lst_push_front(stack_push, tmp);
}

void	pa(t_list **a, t_list **b)
{
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}