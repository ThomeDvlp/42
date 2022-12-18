/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:59:31 by rthome-d          #+#    #+#             */
/*   Updated: 2022/12/17 12:39:40 by rthome-d         ###   ########.fr       */
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
	int	index;
	//int counter;
	//char **av;

	index = 0;
	//counter = -1;
	stack_a = NULL;
	if (argc >= 2)
	{
		while(++index < argc)
		{
			//ft_printf("while ++index < argc (index = %i)\n", index);
			if(argc > 2 && !input_checker(argv + 1))
			{
				ERROR
				return(0);
			}
			//av = ft_split(argv[index], ' ');
			//int aux = 0;
			//while(av[aux])
			//	ft_printf("av %s\n", av[aux++]);
			//if (!av)
			//	ERROR 
			//if (!input_checker(av))
			//	ERROR			
			//while(av[++counter]);			
			//	ft_printf("push_swap av[conter] vaule = [%s]\n", av[counter]);
			//free_split(av);
		}
		ft_printf("STACK A:\n");
		constructor(argc, argv, &stack_a);
		print_list(&stack_a);
	}
	return (0);
}