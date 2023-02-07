/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:12:34 by rthome-d          #+#    #+#             */
/*   Updated: 2022/12/17 12:12:34 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
t_stack	*stack_last(t_stack *stack)
{
	if (!stack)
		return (0);
	while (stack->next)
		stack = stack->next;
	return (stack);
}
void	stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*node;

	node = stack_last(*stack);
	if (node)
		node->next = new;
	else
		*stack = new;
}

 void constructor(int counter, char **av, t_stack **stack_a)
{
	int	aux;
	aux = -1;

	while(++aux < counter)
		stack_add_back(stack_a, stack_new(ft_atoi(av[aux])));
}
