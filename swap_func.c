/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:50:01 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/16 16:53:31 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *stack)
{
	int	tmp;

	if (stack == NULL || stack->next == NULL)
		return ;
	tmp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = tmp;
}
void	sa(t_list *a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list *b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list *a, t_list *b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}