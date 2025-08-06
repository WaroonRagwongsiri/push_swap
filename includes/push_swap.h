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
typedef	struct	s_stack
{
	long long		val;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

// Stack
t_stack	*ft_stacknew(long val);
void	ft_stackclear(t_stack **head);
void	ft_stackadd_back(t_stack **head, t_stack *new);
void	ft_stackadd_front(t_stack **head, t_stack *new);
int		ft_stack_size(t_stack *stack);
t_stack	*ft_stack_last(t_stack *stack);

// Error
void	put_error(void);
void	exit_lst(t_list *stack_a, t_list *stack_b);

// Check Argv
int		check_argv(int argc, char **argv);
int		check_valid(char *str);

// Utils
int		is_sort(t_stack **stack_a);
void	end(t_stack **stack_a, t_stack **stack_b);
void	print_stack(t_stack *stack);
void	print_all_stack(t_stack *stack_a, t_stack *stack_b);
void	put_nbr(void *nbr);

// Parser
void	parser(int argc, char **argv, t_stack **head);

// PushSwap
void	push_swap(t_stack **stack_a, t_stack **stack_b);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

// PushSwap Print
void	ss_print(t_stack **stack_a, t_stack **stack_b);
void	sa_print(t_stack **stack_a);
void	sb_print(t_stack **stack_b);
void	pa_print(t_stack **stack_a, t_stack **stack_b);
void	pb_print(t_stack **stack_a, t_stack **stack_b);
void	rr_print(t_stack **stack_a, t_stack **stack_b);
void	ra_print(t_stack **stack_a);
void	rb_print(t_stack **stack_b);
void	rrr_print(t_stack **stack_a, t_stack **stack_b);
void	rra_print(t_stack **stack_a);
void	rrb_print(t_stack **stack_b);

// Sort
void	small_sort(t_stack **stack_a);
void	sort_three(t_stack	**stack);

#endif