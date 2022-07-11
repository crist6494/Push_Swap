/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:22:21 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/07 18:54:00 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(int total_arg, char **num)
{
	int		i;

	i = 1;
	while (i < total_arg)
	{
		ft_printf("%s ", num[i]);
		i++;
	}
	return (0);
}