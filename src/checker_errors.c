/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_errors.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:45:48 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/21 17:35:09 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	checknumber(char *num)
{
	int	i;

	i = 0;
	if (!num)
	{
		ft_printf("ERROR IS NOT A INTEGER");
		return (0);
	}
	if ((num[i] == '+' || num[i] == '-') && (num + 1) != NULL)
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
		{
			ft_printf("ERROR IS NOT A INTEGER");
			return (0);
		}
		i++;
	}
	return (1);
}

int	checkduplicate(char **num)
{
	int	i;
	int	j;

	i = 0;
	while (num[i])
	{
		j = i + 1;
		while (num[j])
		{
			if (ft_atoi(num[i]) == ft_atoi(num[j]))
			{
				ft_printf("ERROR A NUMBER IS DUPLICATE");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	checkmaxnumber(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (ft_atoi(num) > 2147483647 || ft_atoi(num) < -2147483648)
		{
			ft_printf("ERROR THE MAX VALUE HAS BEEN EXCEEDED");
			return (0);
		}
		i++;
	}	
	return (1);
}

int	check_errors(char **num, int i, int total_arg)
{
	i = 1;
	while (i < total_arg)
	{
		if (!checknumber(num[i]))
			return (0);
		i++;
	}
	i = 1;
	while (i < total_arg)
	{
		if (!checkduplicate(num))
			return (0);
		i++;
	}
	i = 1;
	while (i < total_arg)
	{
		if (!checkmaxnumber(num[i]))
			return (0);
		i++;
	}
	return (1);
}
