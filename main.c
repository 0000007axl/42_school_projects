/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:08:27 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/11 10:23:22 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_list	*l;
	t_list	*last;
	t_list	*first;

	l = NULL;
	for (int i = 0; i < 5; i++)
		lst_push_front(&l, lst_new(i + 1));
	for (t_list *tmp = l; tmp != NULL; tmp = tmp->next)
		printf("%d\n", tmp->value);
	last = lst_pop_back(&l);
	printf("last = %d\n", last->value);
	free(last);
	first = lst_pop_front(&l);
	printf("first = %d\n", first->value);
	free(first);
	for (t_list *tmp = l; tmp != NULL; tmp = tmp->next)
		printf("%d\n", tmp->value);
	lst_clear(&l);
	return (0);
}
