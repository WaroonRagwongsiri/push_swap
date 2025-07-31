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
void	print_stack(t_list *stack);
void	put_nbr(void *nbr);

// Parser
void	parser(int argc, char **argv, t_list **head);

// PushSwap
void	push_swap(t_list *stack_a, t_list *stack_b);
void	swap_a(t_list *stack_a);
void	swap_b(t_list *stack_b);

#endif