/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:08:40 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/11 14:29:49 by trakotos         ###   ########.fr       */
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
long				ft_atol(const char *nptr);
int					is_integer(char *str);
void				put_str(char *str, int fd);
int					get_element(t_list **stack, int ac, char **av);

#endif
