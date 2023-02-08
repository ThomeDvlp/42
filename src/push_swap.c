/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:59:31 by rthome-d          #+#    #+#             */
/*   Updated: 2023/02/08 14:33:20 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void print_list(t_stack **stack_a)
{
	t_stack *temp;

	temp = *stack_a;
	while (temp != NULL)
	{
		ft_printf("nbr/: [%i]\n", temp->nbr);
		temp = temp->next;
	}
}

int main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;

	//int index;
	char	**final_argv;



	// 1 2 3 4 => argc = 4
	// "1 2 3 4" => argc = 2

	// 1 2 3 4 5 6 7 => argc = 8
// "1 2 3 4 5 6 7" => argc = 2
	
//	index = 0;

	stack_a = NULL;
	stack_b = NULL;

	if (argc >= 1)
	{
		if (argc == 2)
		{
			final_argv = ft_split(*(argv + 1), ' ');
			argc = 0;
			while (final_argv[argc])
				argc++;
			argc++;
		}
		else
			final_argv = (argv + 1);
		if (!input_checker(final_argv))
		{
			ERROR
			return (0);
		}
		// After validate if argv need to be freed or not
		ft_printf("STACK A:				STACK B:\n");
		// Build a stack
		constructor(argc - 1, final_argv, &stack_a);
		// Stack Debugger
		print_list(&stack_a);
		print_list(&stack_b);
		swap(&stack_a);
		ft_printf("STACK A swaped:\n");
		print_list(&stack_a);
		rotate(&stack_a);
		ft_printf("STACK_A rotacionated:\n");
		print_list(&stack_a);
		rev_rotate(&stack_a);
		ft_printf("STACK_A rev_rotacionated:\n");
		print_list(&stack_a);
		push(stack_a, stack_b);

		ft_printf("STACK_A rev_rotacionated:\n");
		print_list(&stack_b);
		/*
		if (argc == 4)
			sorter_three(&stack_a);
		*/
	}
	return (0);
}