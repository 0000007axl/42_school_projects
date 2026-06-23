/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 15:15:59 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/24 16:45:03 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	is_shorted(t_list *lst)
{
	if (lst == NULL)
		return (1);
	if (lst->next == NULL)
		return (1);
	while (lst->next != NULL)
	{
		if (lst->next->value < lst->value)
			return (0);
		lst = lst->next;
	}
	return (1);
}

static int	execute_operations(t_list **a, t_list **b)
{
	char	*op;

	op = get_next_line(0, 0);
	while (op != NULL)
	{
		if (!execute_ops(op, a, b))
		{
			get_next_line(0, 1);
			write(2, "Error\n", 6);
			lst_clear(b);
			lst_clear(a);
			free(op);
			return (0);
		}
		free(op);
		op = get_next_line(0, 0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	if (ac < 2)
		return (0);
	b = NULL;
	a = parse(ac, av);
	if (a == NULL)
		return (write(2, "Error\n", 6));
	if (!execute_operations(&a, &b))
		return (1);
	if (is_shorted(a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	lst_clear(&a);
	lst_clear(&b);
	return (0);
}
