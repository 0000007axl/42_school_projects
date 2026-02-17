/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:56:55 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/17 18:20:27 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*lst_to_arr(t_list *lst, int size)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = lst->value;
		lst = lst->next;
		i++;
	}
	return (arr);
}

void	sorter(int *a, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	index_lst(t_list *a)
{
	int		size;
	int		*arr;
	int		i;
	t_list	*iter;

	size = lst_size(a);
	arr = lst_to_arr(a, size);
	sorter(arr, size);
	i = 0;
	while (i < size)
	{
		iter = a;
		while (iter)
		{
			if (iter->value == arr[i])
			{
				iter->index = i;
				break ;
			}
			iter = iter->next;
		}
		i++;
	}
	free(arr);
}
int	ft_sqrt(int num)
{
	int	sq;

	if (num < 3)
		return (1);
	sq = 2;
	while (sq < num)
	{
		if ((num / sq <= sq) && (num % sq <= sq))
			return (sq);
		sq++;
	}
	return (1);
}
