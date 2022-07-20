/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:22:37 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/20 19:02:19 by cmorales         ###   ########.fr       */
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
void	printlist(t_node *list_a, t_node *list_b);
int		checknumber(char *num);
int		checkduplicate(char **num);
int		checkmaxnumber(char *num);
int		check_errors(char **num, int i, int total_arg);
void	sa(t_node **top);
void	sb(t_node **top);
void	ss(t_node **a, t_node **b);
void	pa(t_node **src, t_node **obj);
void	pb(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
#endif
