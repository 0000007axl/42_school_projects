/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:08:40 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/18 11:34:03 by trakotos         ###   ########.fr       */
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

void				pa(t_list **a, t_list **b, t_ops_count *ops_count);
void				pb(t_list **a, t_list **b, t_ops_count *ops_count);
void				sa(t_list *a, t_ops_count *ops_count);
void				sb(t_list *b, t_ops_count *ops_count);
void				ss(t_list *a, t_list *b, t_ops_count *ops_count);
void				ra(t_list **a, t_ops_count *ops_count);
void				rb(t_list **b, t_ops_count *ops_count);
void				rr(t_list **a, t_list **b, t_ops_count *ops_count);
void				rra(t_list **a, t_ops_count *ops_count);
void				rrb(t_list **b, t_ops_count *ops_count);
void				rrr(t_list **a, t_list **b, t_ops_count *ops_count);

int					ft_sqrt(int num);
float				compute_disorder(t_list *l);
int					get_max_index(t_list *lst);
t_ops_count			*new_count_ops(void);

void				simple_sort(t_list **a, t_list **b, t_ops_count *ops_count);
void				medium_sort(t_list **a, t_list **b, t_ops_count *ops_count);
void				complex_sort(t_list **a, t_list **b,
						t_ops_count *ops_count);
void				adaptive_sort(t_list **a, t_list **b,
						t_ops_count *ops_count);

void				push_swap(t_list **a, t_list **b, t_ops_count *ops_count,
						int alg_choice);

#endif
