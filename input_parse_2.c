/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parse_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 15:14:59 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/25 10:08:50 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (((unsigned char)s1[i] != (unsigned char)s2[i])
			|| ((unsigned char)s1[i] == '\0'))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else
			i++;
	}
	return (0);
}

int	is_flag(char *str)
{
	if (!ft_strcmp(str, "--bench") || !ft_strcmp(str, "--simple")
		|| !ft_strcmp(str, "--medium") || !ft_strcmp(str, "--complex")
		|| !ft_strcmp(str, "--adaptive"))
		return (1);
	return (0);
}

void	apply_flags(char *str, t_flags *flags)
{
	if (!ft_strcmp(str, "--bench"))
		flags->is_bench = 1;
	if (!ft_strcmp(str, "--adaptive"))
		flags->alg_choice = 0;
	if (!ft_strcmp(str, "--simple"))
		flags->alg_choice = 1;
	if (!ft_strcmp(str, "--medium"))
		flags->alg_choice = 2;
	if (!ft_strcmp(str, "--complex"))
		flags->alg_choice = 3;
}
