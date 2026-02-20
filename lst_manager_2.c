/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_manager_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:44:27 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/20 13:26:02 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*ft_strcpy(char *d, char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

static t_ops	*lst_new_ops(char *value)
{
	t_ops	*lst;

	lst = (t_ops *)malloc(sizeof(t_ops));
	if (lst == NULL)
		return (NULL);
	ft_strcpy(lst->ops, value);
	lst->next = NULL;
	return (lst);
}

void	lst_add_ops_back(t_ops **lst, char *ops)
{
	t_ops	*new;
	t_ops	*tmp;

	new = lst_new_ops(ops);
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}

static void	printstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	print_ops(t_ops *ops)
{
	while (ops != NULL)
	{
		printstr(ops->ops);
		ops = ops->next;
	}
}
