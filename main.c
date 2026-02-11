/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:08:27 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/11 09:49:11 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_list	*l;

	l = NULL;
	for (int i = 0; i < 5; i++)
		lst_addback(&l, i + 1);
	for (t_list *tmp = l; tmp != NULL; tmp = tmp->next)
		printf("%d\n", tmp->value);
	ft_lstclear(&l);
	return (0);
}
