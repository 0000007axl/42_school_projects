/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:08:27 by trakotos          #+#    #+#             */
/*   Updated: 2026/03/03 14:25:13 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list		*a;
	t_list		*b;
	t_ops_count	ops_count;
	t_flags		flags;

	flags.is_bench = 0;
	flags.alg_choice = 0;
	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	new_count_ops(&ops_count);
	a = parse(ac, av, &flags);
	if (a == NULL)
		return (write(2, "Error\n", 6));
	ops_count.disorder = compute_disorder(a);
	push_swap(&a, &b, &ops_count, flags);
	if (flags.is_bench)
		print_bench(&ops_count, ops_count.disorder, flags.alg_choice);
	lst_clear(&a);
	lst_clear(&b);
	return (0);
}
