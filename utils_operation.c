/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_operation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 10:26:36 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/11 11:53:34 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **stack_pop, t_list **stack_push)
{
	t_list	*tmp;

	tmp = lst_pop_front(stack_pop);
	lst_push_front(stack_push, tmp);
}

void	rotate(t_list **stack)
{
	t_list	*tmp;

	tmp = lst_pop_front(stack);
	lst_push_back(stack, tmp);
}

void	reverse_rotate(t_list **stack)
{
	t_list	*tmp;

	tmp = lst_pop_back(stack);
	lst_push_front(stack, tmp);
}

void	swap(t_list *stack)
{
	int	tmp;

	if (stack == NULL || stack->next == NULL)
		return ;
	tmp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = tmp;
}
