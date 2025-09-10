/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:06:02 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/07/10 15:06:02 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// Includes
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "../libft/includes/libft.h"

// Stack
typedef struct s_stack
{
	long			val;
	int				index;
	int				push_cost;
	struct s_stack	*next;
	struct s_stack	*target;
}	t_stack;

// Stack
t_stack	*ft_stacknew(long val);
void	ft_stackclear(t_stack **head);
void	ft_stackadd_back(t_stack **head, t_stack *new);
void	ft_stackadd_front(t_stack **head, t_stack *new);
int		ft_stack_size(t_stack *stack);
t_stack	*ft_stack_last(t_stack *stack);
void	ft_stack_index(t_stack **stack);

// Error
void	put_error(void);
void	exit_lst(t_list *stack_a, t_list *stack_b);

// Check Argv
int		check_argv(int argc, char **argv);
int		check_valid(char *str);

// Utils
int		is_stack_a_sort(t_stack **stack_a);
void	end(t_stack **stack_a, t_stack **stack_b);
void	print_stack(t_stack *stack);
void	print_all_stack(t_stack *stack_a, t_stack *stack_b);
void	put_nbr(void *nbr);
void	free_split(char **arr, int count);
long	ft_atol(char *nptr);
int		is_duplicate(t_stack **stack_a);

// List Command uses Utils
void	do_nothing(void *ptr);
int		sol_list(char *str);
void	print_iter(void *ptr);

// Parser
void	parser(int argc, char **argv, t_stack **head);
void	parse_each_argv(char *str, t_stack **head);

// PushSwap
void	push_swap(t_stack **stack_a, t_stack **stack_b);
void	sa(t_stack **stack_a, t_stack **stack_b);
void	sb(t_stack **stack_a, t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a, t_stack **stack_b);
void	rb(t_stack **stack_a, t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a, t_stack **stack_b);
void	rrb(t_stack **stack_a, t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	rra_no_print(t_stack **stack_a, t_stack **stack_b);
void	rrb_no_print(t_stack **stack_a, t_stack **stack_b);
void	ra_no_print(t_stack **stack_a, t_stack **stack_b);
void	rb_no_print(t_stack **stack_a, t_stack **stack_b);

// Sort
void	small_sort(t_stack **stack_a, t_stack **stack_b);
void	sort_a_three_asc(t_stack **stack_a, t_stack **stack_b);
void	big_sort(t_stack **stack_a, t_stack **stack_b);
void	cheapest_a_to_b(t_stack **stack_a, t_stack **stack_b);
void	b_to_clossest_bigger_a(t_stack **stack_a, t_stack **stack_b);
void	sort_a(t_stack **stack_a, t_stack **stack_b);
void	a_to_b_cost(t_stack **stack_a, t_stack **stack_b);
int		cost_closest_smaller(t_stack *node_stack_a, t_stack **stack_b);
t_stack	*cheapest_node(t_stack **stack_a);
void	operate_cheapest_a_to_b(int a_count, int b_count,
			t_stack **stack_a, t_stack **stack_b);
void	set_target_b_to_a(t_stack **stack_a,
			t_stack *node_stack_b);
void	target_a_to_top(t_stack *choosen_node,
			t_stack **stack_a, t_stack **stack_b);
t_stack	*get_min(t_stack **stack);
void	r_a(int	a_count, int reverse, t_stack **stack_a, t_stack **stack_b);
void	r_b(int	b_count, int reverse, t_stack **stack_a, t_stack **stack_b);

// Bonus
void	command(t_stack **stack_a, t_stack **stack_b);
int		check_command(char *command, t_stack **stack_a, t_stack **stack_b);
void	end_error_checker(t_stack **stack_a, t_stack **stack_b);

#endif