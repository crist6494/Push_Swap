/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:33:42 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/27 19:22:27 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	printlist(t_node *list_a, t_node *list_b)
{
	int	a;
	int	b;

	while (list_a || list_b)
	{
		if (list_a)
		{
			if (list_a)
				a = list_a->value;
			list_a = list_a->nxt;
		}
		else
			a = 0;
		if (list_b)
		{
			if (list_b)
				b = list_b->value;
			list_b = list_b->nxt;
		}
		else
			b = 0;
		printf("%d     %d \n", a, b);
	}
	printf("---------\nA     B \n\n");
}

int	push_swap(int total_arg, char **num, t_node **list_a, t_node **list_b)
{
	int		i;

	i = 1;
	if (!check_errors(num, i, total_arg))
		return (0);
	while (i < total_arg)
	{
		init_stack(list_a, ft_atoi(num[i]));
		i++;
	}
	/*get_min_value(list_a);
	t_node *tmp;
	tmp = (*list_a);
	while (tmp)
	{
		ft_printf("%d\n", tmp->fixed);
		tmp = tmp->nxt;
	} */
	order_sort_4(list_a, list_b);
	ft_printf("\n");
	printlist(*list_a, *list_b);	

	return (0);
}

int	main(int argc, char **argv)
{
	t_node	*list_a;
	t_node	*list_b;

	list_a = malloc(sizeof(t_node));
	list_b = malloc(sizeof(t_node));
	if (!list_a)
		return (0);
	if (!list_b)
		return (0);
	list_a = NULL;
	list_b = NULL;
	push_swap (argc, argv, &list_a, &list_b);
	return (0);
}
