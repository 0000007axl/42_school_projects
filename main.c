/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:08:27 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/18 10:59:12 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(t_list *lst)
{
	if (lst == NULL)
	{
		printf("[]\n");
		return ;
	}
	printf("[");
	for (t_list *i = lst; i != NULL; i = i->next)
		printf("%d%s", i->value, i->next == NULL ? "]\n" : ", ");
}

int	main(int ac, char **av)
{
	t_list		*a;
	t_list		*b;
	t_ops_count	*ops_count;
	int			alg_choice;
	int			is_bench;

	is_bench = 0;
	alg_choice = 0;
	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	ops_count = new_count_ops();
	if (ops_count == NULL)
		return (1);
	if (!parse(ac, av, &a, &alg_choice, &is_bench))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	// printf("%.2f%%\n", compute_disorder(a) * 100);
	print(a);
	print(b);
	push_swap(&a, &b, ops_count, alg_choice, is_bench);
	print(a);
	print(b);
	lst_clear(&a);
	lst_clear(&b);
	return (0);
}
