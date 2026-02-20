/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:13:22 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/20 13:17:42 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **a, t_list **b, t_ops_count *ops_count,
		int alg_choice)
{
	t_ops	*lst_ops;

	lst_ops = NULL;
	if (*a == NULL)
		return ;
	if ((*a)->next == NULL)
		return ;
	if (alg_choice == 0 || lst_size(*a) <= 5)
		adaptive_sort(a, b, ops_count, &lst_ops);
	else if (alg_choice == 1)
		simple_sort(a, b, ops_count, &lst_ops);
	else if (alg_choice == 2)
		medium_sort(a, b, ops_count, &lst_ops);
	else if (alg_choice == 3)
		complex_sort(a, b, ops_count, &lst_ops);
	print_ops(lst_ops);
}
