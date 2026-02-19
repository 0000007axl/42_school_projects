/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:13:22 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/19 12:42:27 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **a, t_list **b, t_ops_count *ops_count,
		int alg_choice)
{
	if (*a == NULL)
		return ;
	if (alg_choice == 1)
		simple_sort(a, b, ops_count);
	else if (alg_choice == 2)
		medium_sort(a, b, ops_count);
	else if (alg_choice == 3)
		complex_sort(a, b, ops_count);
	else
		adaptive_sort(a, b, ops_count);
}
