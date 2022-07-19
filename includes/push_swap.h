/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:22:37 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/19 20:40:24 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../42-library/libft.h"
# include <stddef.h>

typedef	struct t_node
{
	int	value;
	struct	t_node *prv;
	struct	t_node *nxt;
}t_node;

int		push_swap(int total_arg, char **num, t_node **list_a, t_node **list_b);
int		main(int argc, char **argv);
void	add_bottom(t_node **list_a, t_node *new);
void	init_stack(t_node **list_a, int number);
void	sa(t_node **top);
void	sb(t_node **top);
void	ss(t_node **a, t_node **b);
void	pa(t_node **src, t_node **obj);
void	pb(t_node **a, t_node **b);
int		checknumber(char *num);
int		checkduplicate(char **num);
int		checkmaxnumber(char *num);
int		check_all(char **num, int i, int total_arg);
void	printlist(t_node *list_a, t_node *list_b);

#endif
