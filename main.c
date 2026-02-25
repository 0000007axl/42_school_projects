/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:08:27 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/25 09:41:47 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list		*a;
	t_list		*b;
	t_ops_count	ops_count;
	int			alg_choice;
	int			is_bench;

	is_bench = 0;
	alg_choice = 0;
	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	new_count_ops(&ops_count);
	a = parse(ac, av, &alg_choice, &is_bench);
	if (a == NULL)
		return (write(2, "Error\n", 6));
	ops_count.disorder = compute_disorder(a);
	push_swap(&a, &b, &ops_count, alg_choice);
	if (is_bench)
		print_bench(&ops_count, ops_count.disorder, alg_choice);
	lst_clear(&a);
	lst_clear(&b);
	return (0);
}
