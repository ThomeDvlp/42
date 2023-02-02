 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:23:13 by rthome-d          #+#    #+#             */
/*   Updated: 2022/12/17 12:39:23 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define ERROR 		{\
						ft_printf("Error\n");\
						return(1);\
					}	
# define MAX 2147483647
# define MIN -2147483648
# include <unistd.h>
# include <stdlib.h> 
# include <fcntl.h>
# include "../libft/libft.h"

typedef struct		s_stack
{
	int				nbr;
	int				index;
	struct s_stack	*next;
}					t_stack;

int 	input_checker(char **argv_splited);

t_stack	*stack_new(long long int nbr);

t_stack	*stack_last(t_stack *stack);

void	stack_add_back(t_stack **stack, t_stack *new);

void 	constructor(int counter, char **av, t_stack **stack_a);

//void	print_list(t_stack **stack_a)

#endif
