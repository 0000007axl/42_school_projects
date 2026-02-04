/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 06:38:16 by seramaro          #+#    #+#             */
/*   Updated: 2026/01/31 09:48:40 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *content))
{
	t_list	*curr;
	t_list	*next;

	curr = lst;
	while (curr)
	{
		next = curr->next;
		f(curr->content);
		curr = next;
	}
}
