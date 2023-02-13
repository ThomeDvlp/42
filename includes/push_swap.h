/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:23:13 by rthome-d          #+#    #+#             */
/*   Updated: 2023/02/12 19:31:54 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MAX 2147483647
# define MIN -2147483648
# include <unistd.h>
# include <stdlib.h> 
# include <fcntl.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int				nbr;
	int				index;
	struct s_stack	*next;
}					t_stack;

int		input_checker(char **argv_splited);

t_stack	*stack_new(long long int nbr, int index);

t_stack	*stack_last(t_stack *stack);

void	stack_add_back(t_stack **stack, t_stack *new);

void	constructor(int counter, char **av, t_stack **stack_a);

void	organizer(int argc, t_stack **stack_a, t_stack **stack_b);

void	push(t_stack **stack_a, t_stack **stack_b, char stk);

void	swap(t_stack **stack, char stk);

void	rotate(t_stack **stack, char stk);

void	rev_rotate(t_stack **stack, char stk);

void	print_list(t_stack **stack);

void	stack_add_front(t_stack **stack, t_stack *new);

int		*ar_index(int argc, char **argv);

void	index_populate(int argc, int *ar_index, t_stack **stack_a);

void	two(t_stack *stack_a);

void	three(t_stack *stack_a);

#endif
