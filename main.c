/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:08:27 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/17 18:46:02 by seramaro         ###   ########.fr       */
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
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	if (!parse(ac, av, &a))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	print(a);
	print(b);
	medium_sort(&a, &b);
	print(a);
	print(b);
	return (0);
}
