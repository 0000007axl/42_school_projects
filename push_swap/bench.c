/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:33:39 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/20 15:14:48 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	new_count_ops(t_ops_count *ops_count)
{
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

void	print_bench(t_ops_count *o, float disorder, int alg_choice)
{
	ft_printf("[bench] disorder: %f%%\n", disorder * 100);
	ft_printf("[bench] strategy: ");
	if (alg_choice == 1)
		ft_printf("Simple / O(n²)\n");
	else if (alg_choice == 2)
		ft_printf("Medium / O(n√n)\n");
	else if (alg_choice == 3)
		ft_printf("Complex / O(n log(n))\n");
	else
	{
		ft_printf("Adaptive ");
		if (disorder < 0.2)
			ft_printf("/ O(n²)\n");
		else if ((disorder >= 0.2) && (disorder < 0.5))
			ft_printf("/ O(n√n)\n");
		else
			ft_printf("/ O(n log(n))\n");
	}
	ft_printf("[bench] total_ops: %d\n", o->total_ops);
	ft_printf("[bench] sa:\t%d\tsb:\t%d\tss:\t%d\tpa:\t%d\tpb:\t%d\n", o->sa,
		o->sb, o->ss, o->pa, o->pb);
	ft_printf("[bench] ra:\t%d\trb:\t%d\trr:\t%d\t", o->ra, o->rb, o->rr);
	ft_printf("rra:\t%d\trrb:\t%d\trrr:\t%d\n", o->rra, o->rrb, o->rrr);
}
