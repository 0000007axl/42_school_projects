/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:37:42 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/20 17:17:06 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "get_next_line_bonus.h"
# include "unistd.h"
# include <limits.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}					t_list;

void				lst_push_back(t_list **lst, t_list *new);
void				lst_push_front(t_list **lst, t_list *new);
t_list				*lst_pop_back(t_list **lst);
t_list				*lst_pop_front(t_list **lst);
t_list				*lst_clear(t_list **lst);
t_list				*lst_new(int value);
t_list				*parse(int ac, char **av);
int					execute_ops(char *ops, t_list **a, t_list **b);
void				swap(t_list *stack);
void				push(t_list **stack_pop, t_list **stack_push);
void				rotate(t_list **stack);
void				reverse_rotate(t_list **stack);

#endif
