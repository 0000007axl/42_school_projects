/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:37:42 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/20 16:58:14 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "get_next_line.h"
# include "unistd.h"

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}					t_list;

void				lst_push_back(t_list **lst, t_list *new);
void				lst_push_front(t_list **lst, t_list *new);
t_list				*lst_pop_back(t_list **lst);
t_list				*lst_pop_front(t_list **lst);
t_list				*parse(int ac, char **av);
int					execute_ops(char *ops, t_list **a, t_list **b);

#endif
