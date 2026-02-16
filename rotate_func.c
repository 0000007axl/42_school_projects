/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:55:12 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/16 17:00:00 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*tmp;

	tmp = lst_pop_front(stack);
	lst_push_back(stack, tmp);
}

void	ra(t_list **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}
void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}