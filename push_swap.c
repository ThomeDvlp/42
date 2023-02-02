/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:59:31 by rthome-d          #+#    #+#             */
/*   Updated: 2023/02/02 11:45:05 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

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
	// t_stack *stack_b;

	int index;

	index = 0;

	stack_a = NULL;
	// stack_b = NULL;

	if (argc >= 1)
	{
		while (++index < argc)
		{
			if (argc > 1 && !input_checker(argv + 1))
			{
				ERROR
				return (0);
			}
		}
		ft_printf("STACK A:\n");
		constructor(argc, argv, &stack_a);
		print_list(&stack_a);
		/*
		if (argc == 4)
			sorter_three(&stack_a);
		*/
	}
	return (0);
}