/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 23:29:15 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/17 23:52:53 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_bits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n = n / 2;
		count++;
	}
	return (count);
}
void	complex_sort(t_list **a, t_list **b)
{
	int	bit_count;
	int	i;
	int	size;
	int	j;

	index_lst(*a);
	bit_count = count_bits(get_max_index(*a));
	i = 0;
	while (i < bit_count)
	{
		size = lst_size(*a);
		j = 0;
		while (j < size)
		{
			if (((*a)->index >> i) & 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (*b != NULL)
			pa(a, b);
		i++;
	}
}
