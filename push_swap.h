/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:08:40 by trakotos          #+#    #+#             */
/*   Updated: 2026/03/03 14:18:02 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./ft_printf/ft_printf.h"
# include <limits.h>
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
	float			disorder;
}					t_ops_count;

typedef struct s_flags
{
	int				alg_choice;
	int				is_bench;
}					t_flags;

typedef struct s_ops
{
	char			ops[5];
	struct s_ops	*next;
}					t_ops;

t_list				*lst_new(int value);
t_list				*lst_clear(t_list **lst);
void				lst_push_back(t_list **lst, t_list *new);
void				lst_push_front(t_list **lst, t_list *new);
t_list				*lst_pop_back(t_list **lst);
t_list				*lst_pop_front(t_list **lst);
int					lst_size(t_list *lst);
void				index_lst(t_list *a);
void				lst_add_ops_back(t_ops **lst, char *ops);
void				print_ops(t_ops *ops);

t_list				*parse(int ac, char **av, t_flags *flags);
void				apply_flags(char *str, t_flags *flags);
int					is_flag(char *str);
char				**ft_cleanup_2d(char **strs, int l);
char				*ft_strjoin(int size, char **strs, char *sep);
char				**ft_split(char *s, char c);
int					ft_strlen(char *str);

void				pa(t_list **a, t_list **b, t_ops_count *ops_count,
						t_ops **ops);
void				pb(t_list **a, t_list **b, t_ops_count *ops_count,
						t_ops **ops);
void				sa(t_list *a, t_ops_count *ops_count, t_ops **ops);
void				sb(t_list *b, t_ops_count *ops_count, t_ops **ops);
void				ss(t_list *a, t_list *b, t_ops_count *ops_count,
						t_ops **ops);
void				ra(t_list **a, t_ops_count *ops_count, t_ops **ops);
void				rb(t_list **b, t_ops_count *ops_count, t_ops **ops);
void				rr(t_list **a, t_list **b, t_ops_count *ops_count,
						t_ops **ops);
void				rra(t_list **a, t_ops_count *ops_count, t_ops **ops);
void				rrb(t_list **b, t_ops_count *ops_count, t_ops **ops);
void				rrr(t_list **a, t_list **b, t_ops_count *ops_count,
						t_ops **ops);

void				push_min_to_b(t_list **a, t_list **b,
						t_ops_count *ops_count, t_ops **ops);
int					ft_sqrt(int num);
float				compute_disorder(t_list *l);
int					get_max_index(t_list *lst);
void				new_count_ops(t_ops_count *count_ops);

void				simple_sort(t_list **a, t_list **b, t_ops_count *ops_count,
						t_ops **ops);
void				medium_sort(t_list **a, t_list **b, t_ops_count *ops_count,
						t_ops **ops);
void				complex_sort(t_list **a, t_list **b, t_ops_count *ops_count,
						t_ops **ops);
void				adaptive_sort(t_list **a, t_list **b,
						t_ops_count *ops_count, t_ops **ops);

void				push_swap(t_list **a, t_list **b, t_ops_count *ops_count,
						t_flags flags);

void				print_bench(t_ops_count *o, float disorder, int alg_choice);

#endif
