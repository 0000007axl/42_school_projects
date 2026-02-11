/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:08:27 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/11 11:40:09 by trakotos         ###   ########.fr       */
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

int	main(void)
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	a = NULL;
	for (int i = 0; i < 5; i++)
		lst_push_front(&a, lst_new(i + 1));
	print(a);
	print(b);
	printf("rotate\n");
	rotate(&a);
	rotate(&b);
	print(a);
	print(b);
	lst_clear(&a);
	lst_clear(&b);
	return (0);
}
