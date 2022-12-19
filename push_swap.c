/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:59:31 by rthome-d          #+#    #+#             */
/*   Updated: 2022/12/19 09:24:26 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"
#include <stdio.h>

// ./push_swap 1 3 6 4 9


t_stack	*stack_new(long long int nbr)
{
	t_stack	*nlst;

	nlst = (t_stack *) malloc (sizeof(t_stack));
	if (!nlst)
		return (0);
	nlst->nbr = (int)nbr;
	nlst->next = 0;
	return (nlst);
}
t_stack	*stack_last(t_stack *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
void	stack_add_back(t_stack **lst, t_stack *new)
{
	t_stack	*node;

	node = stack_last(*lst);
	if (node)
		node->next = new;
	else
		*lst = new;
}

 void constructor(int counter, char **av, t_stack **stack_a)
{
	int	aux;
	aux = 0;

	while(++aux < counter)
		stack_add_back(stack_a, stack_new(ft_atoi(av[aux])));
}

void	print_list(t_stack **stack_a)
//, int counter)
{
	t_stack *temp;

	temp = *stack_a;
	while(temp != NULL)
	{
		printf("nbr/: [%i]\n", temp->nbr);
		temp = temp->next;
	}
}

int	main (int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack *stack_b;
	
	int	index;

	index = 0;

	stack_a = NULL;
	stack_b = NULL;
	
	if (argc >= 1)
	{
		while(++index < argc)
		{
			if(argc > 1 && !input_checker(argv + 1))
			{
				ERROR
				return(0);
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