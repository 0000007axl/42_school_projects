/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 00:43:16 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/18 11:34:23 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive_sort(t_list **a, t_list **b, t_ops_count *ops_count)
{
	float	disorder;

	disorder = compute_disorder(*a);
	if (disorder <= 1e-6)
		return ;
	if (disorder < 0.2)
		simple_sort(a, b, ops_count);
	else if ((disorder >= 0.2) && (disorder < 0.5))
		medium_sort(a, b, ops_count);
	else
		complex_sort(a, b, ops_count);
}
