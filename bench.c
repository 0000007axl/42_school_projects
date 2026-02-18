/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:33:39 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/18 09:37:34 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ops_count	*new_count_ops(void)
{
	t_ops_count	*ops_count;

	ops_count = (t_ops_count *)malloc(sizeof(t_ops_count));
	if (ops_count == NULL)
		return (NULL);
	ops_count->pa = 0;
	ops_count->pb = 0;
	ops_count->ra = 0;
	ops_count->rra = 0;
	ops_count->rb = 0;
	ops_count->rrb = 0;
	ops_count->rr = 0;
	ops_count->rrr = 0;
	ops_count->sa = 0;
	ops_count->sb = 0;
	ops_count->ss = 0;
	ops_count->total_ops = 0;
}
