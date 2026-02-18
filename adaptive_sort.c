/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 00:43:16 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/18 01:06:18 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive_sort(t_list **a, t_list **b)
{
	float	disorder;

	disorder = compute_disorder(*a);
	if (disorder <= 1e-6)
		return ;
	if (disorder < 0.2)
		simple_sort(a, b);
	else if ((disorder >= 0.2) && (disorder < 0.5))
		medium_sort(a, b);
	else
		complex_sort(a, b);
}
