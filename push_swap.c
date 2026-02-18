/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:13:22 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/18 11:01:15 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **a, t_list **b, t_ops_count *ops_count,
		int alg_choice)
{
	if (alg_choice == 1)
		simple_sort(a, b);
	else if (alg_choice == 2)
		medium_sort(a, b);
	else if (alg_choice == 3)
		complex_sort(a, b);
	else
		adaptive_sort(a, b);
}
