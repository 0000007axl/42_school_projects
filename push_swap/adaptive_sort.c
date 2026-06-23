/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 00:43:16 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/20 13:14:40 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_3_element(t_list **a, t_ops_count *ops_count, int size,
		t_ops **ops)
{
	int	max_index;

	max_index = get_max_index(*a);
	if (size == 2)
	{
		if ((*a)->index > (*a)->next->index)
			sa(*a, ops_count, ops);
		return ;
	}
	if ((*a)->index == max_index)
		ra(a, ops_count, ops);
	else if ((*a)->next->index == max_index)
		rra(a, ops_count, ops);
	if ((*a)->index > (*a)->next->index)
		sa(*a, ops_count, ops);
}

static void	sort_5_element(t_list **a, t_list **b, t_ops_count *ops_count,
		t_ops **ops)
{
	int	size;

	size = lst_size(*a);
	if (size == 5)
	{
		push_min_to_b(a, b, ops_count, ops);
		push_min_to_b(a, b, ops_count, ops);
		sort_3_element(a, ops_count, size, ops);
		pa(a, b, ops_count, ops);
		pa(a, b, ops_count, ops);
	}
	else if (size == 4)
	{
		push_min_to_b(a, b, ops_count, ops);
		sort_3_element(a, ops_count, size, ops);
		pa(a, b, ops_count, ops);
	}
	else
		sort_3_element(a, ops_count, size, ops);
}

void	adaptive_sort(t_list **a, t_list **b, t_ops_count *ops_count,
		t_ops **ops)
{
	float	disorder;
	int		size;

	size = lst_size(*a);
	disorder = compute_disorder(*a);
	if (size <= 5)
	{
		index_lst(*a);
		sort_5_element(a, b, ops_count, ops);
		return ;
	}
	if (disorder <= 1e-6)
		return ;
	if (disorder < 0.2)
		simple_sort(a, b, ops_count, ops);
	else if ((disorder >= 0.2) && (disorder < 0.5))
		medium_sort(a, b, ops_count, ops);
	else
		complex_sort(a, b, ops_count, ops);
}
