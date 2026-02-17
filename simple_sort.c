/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:15:51 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/17 15:44:41 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		get_min(t_list *lst)
{
	int		min_value;

	min_value = __INT_MAX__;
	while (lst)
	{
		if (lst->value < min_value)
			min_value = lst->value;
		lst = lst->next;
	}
	return (min_value);
}

static void	push_min_to_b(t_list **a, t_list **b)
{
	int a_size;
	int	min_index;
	int min;
	t_list	*iter;
	
	a_size = lst_size(*a);
	min_index = 0;
	min = get_min(*a);
	iter = *a;
	while (iter->value != min)
	{
		iter = iter->next;
		min_index++;
	}
	a_size = lst_size(*a);
	if (min_index < (a_size / 2))
		while((*a)->value != min)
			ra(a);
	else
		while((*a)->value != min)
			rra(a);
	pb(a, b);
}

void	simple_sort(t_list **a, t_list **b)
{
	while(*a != NULL)
		push_min_to_b(a, b);
	while(*b != NULL)
		pa(a, b);
}
