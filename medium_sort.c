/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 22:21:16 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/18 11:17:43 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_index(t_list *lst)
{
	int	max_index;

	max_index = 0;
	while (lst)
	{
		if (lst->index > max_index)
			max_index = lst->index;
		lst = lst->next;
	}
	return (max_index);
}

static void	push_max_index_to_a(t_list **a, t_list **b, t_ops_count *ops_count)
{
	int		b_size;
	int		max_index;
	int		max;
	t_list	*iter;

	b_size = lst_size(*b);
	max_index = 0;
	max = get_max_index(*b);
	iter = *b;
	while (iter->index != max)
	{
		iter = iter->next;
		max_index++;
	}
	b_size = lst_size(*b);
	if (max_index < (b_size / 2))
		while ((*b)->index != max)
			rb(b, ops_count);
	else
		while ((*b)->index != max)
			rrb(b, ops_count);
	pa(a, b, ops_count);
}

void	medium_sort(t_list **a, t_list **b, t_ops_count *ops_count)
{
	int	block_size;
	int	block_num;
	int	i;
	int	size_a;
	int	init_size;

	index_lst(*a);
	block_size = ft_sqrt(lst_size(*a));
	block_num = block_size;
	init_size = lst_size(*a);
	while (*a != NULL)
	{
		i = 0;
		size_a = lst_size(*a);
		while (i++ < size_a)
		{
			if ((*a)->index < block_num)
				pb(a, b, ops_count);
			else
				ra(a, ops_count);
		}
		block_num += block_size;
	}
	while (*b != NULL)
		push_max_index_to_a(a, b, ops_count);
}
