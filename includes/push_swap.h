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

// Error
void	put_error(void);
void	exit_lst(t_list *stack_a, t_list *stack_b);

// Check Argv
int		check_argv(int argc, char **argv);
int		check_valid(char *str);

// Utils
void	end(t_list *stack_a, t_list *stack_b);
void	print_stack(t_list *stack);
void	print_all_stack(t_list *stack_a, t_list *stack_b);
void	put_nbr(void *nbr);

// Parser
void	parser(int argc, char **argv, t_list **head);

// PushSwap
void	push_swap(t_list **stack_a, t_list **stack_b);
void	sa(t_list *stack_a);
void	sb(t_list *stack_b);
void	ss(t_list *stack_a, t_list *stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);

#endif