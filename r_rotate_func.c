/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate_func.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:00:23 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/18 11:23:16 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*tmp;

	tmp = lst_pop_back(stack);
	lst_push_front(stack, tmp);
}

void	rra(t_list **a, t_ops_count *ops_count)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
	ops_count->rra++;
	ops_count->total_ops++;
}

void	rrb(t_list **b, t_ops_count *ops_count)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
	ops_count->rrb++;
	ops_count->total_ops++;
}

void	rrr(t_list **a, t_list **b, t_ops_count *ops_count)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
	ops_count->rrr++;
	ops_count->total_ops++;
}
