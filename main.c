/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:08:27 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/11 10:00:10 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_list	*l;
	t_list	*last;

	l = NULL;
	for (int i = 0; i < 5; i++)
		lst_addback(&l, i + 1);
	for (t_list *tmp = l; tmp != NULL; tmp = tmp->next)
		printf("%d\n", tmp->value);
	last = lst_popback(&l);
	printf("last = %d\n", last->value);
	free(last);
	for (t_list *tmp = l; tmp != NULL; tmp = tmp->next)
		printf("%d\n", tmp->value);
	lst_clear(&l);
	return (0);
}
