/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:15:20 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/17 18:59:07 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max(t_list *lst)
{
	int	max_index;

	max_index = INT_MIN;
	while (lst)
	{
		if (lst->index > max_index)
			max_index = lst->index;
		lst = lst->next;
	}
	return (max_index);
}
static void	push_max_index_to_a(t_list **a, t_list **b)
{
	int		b_size;
	int		max_index;
	int		max;
	t_list	*iter;

	b_size = lst_size(*b);
	max_index = 0;
	max = get_max(*b);
	iter = *b;
	while (iter->index != max)
	{
		iter = iter->next;
		max_index++;
	}
	b_size = lst_size(*b);
	if (max_index < (b_size / 2))
		while ((*b)->index != max)
			rb(b);
	else
		while ((*b)->index != max)
			rrb(b);
	pa(a, b);
}
void	medium_sort(t_list **a, t_list **b)
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
	while (block_num <= init_size)
	{
		i = 0;
		size_a = lst_size(*a);
		while (i++ < size_a)
		{
			if ((*a)->index < block_num)
				pb(a, b);
			else
				ra(a);
		}
		block_num += block_size;
	}
	while (*b != NULL)
		push_max_index_to_a(a, b);
}
