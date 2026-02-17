/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:08:40 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/17 15:38:53 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}					t_list;

t_list				*lst_new(int value);
void				lst_clear(t_list **lst);
void				lst_push_back(t_list **lst, t_list *new);
void				lst_push_front(t_list **lst, t_list *new);
t_list				*lst_pop_back(t_list **lst);
t_list				*lst_pop_front(t_list **lst);
void				push(t_list **stack_pop, t_list **stack_push);
void				rotate(t_list **stack);
void				reverse_rotate(t_list **stack);
void				swap(t_list *stack);
void				pa(t_list **a, t_list **b);
void				pb(t_list **a, t_list **b);
void				sa(t_list *a);
void				sb(t_list *b);
void				ss(t_list *a, t_list *b);
void				ra(t_list **a);
void				rb(t_list **b);
void				rr(t_list **a, t_list **b);
void				rra(t_list **a);
void				rrb(t_list **b);
void				rrr(t_list **a, t_list **b);
int					lst_size(t_list *lst);
void				simple_sort(t_list **a, t_list **b);
#endif