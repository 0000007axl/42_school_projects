/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:08:40 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/18 09:52:31 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				index;
	int				value;
	struct s_list	*next;
}					t_list;

typedef struct s_ops_count
{
	int				pa;
	int				pb;
	int				ra;
	int				rra;
	int				rb;
	int				rrb;
	int				rr;
	int				rrr;
	int				sa;
	int				sb;
	int				ss;
	int				total_ops;
}					t_ops_count;

t_list				*lst_new(int value);
void				lst_clear(t_list **lst);
void				lst_push_back(t_list **lst, t_list *new);
void				lst_push_front(t_list **lst, t_list *new);
t_list				*lst_pop_back(t_list **lst);
t_list				*lst_pop_front(t_list **lst);
int					lst_size(t_list *lst);
void				index_lst(t_list *a);

void				push(t_list **stack_pop, t_list **stack_push);
void				rotate(t_list **stack);
int					parse(int ac, char **av, t_list **a);
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

int					ft_sqrt(int num);
float				compute_disorder(t_list *l);
int					get_max_index(t_list *lst);
t_ops_count			*new_count_ops(void);

void				simple_sort(t_list **a, t_list **b);
void				medium_sort(t_list **a, t_list **b);
void				complex_sort(t_list **a, t_list **b);
void				adaptive_sort(t_list **a, t_list **b);

void				push_swap(t_list **a, t_list **b, t_ops_count *ops_count,
						int alg_choice);

#endif
