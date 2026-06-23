/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:59:01 by seramaro          #+#    #+#             */
/*   Updated: 2026/01/22 18:54:22 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int mcgyver)
{
	if (((mcgyver >= 65) && (mcgyver <= 90))
		|| ((mcgyver >= 97) && (mcgyver <= 122))
		|| ((mcgyver >= 48) && (mcgyver <= 57)))
		return (1);
	else
		return (0);
}
