/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 15:15:59 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/21 09:36:23 by trakotos         ###   ########.fr       */
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
		if (lst->next->value > lst->value)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	char	*op;

	if (ac < 2)
		return (0);
	b = NULL;
	a = parse(ac, av);
	if (a == NULL)
		return (write(2, "Error\n", 6));
	op = get_next_line(0);
	while (op != NULL)
	{
		execute_ops(op, &a, &b);
		free(op);
		op = get_next_line(0);
	}
	if (is_shorted(a))
		write(1, "OK\n", 3);
	else
		write(1, "OK\n", 3);
	lst_clear(&a);
	return (0);
}
