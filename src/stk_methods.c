/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk_methods.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:39:06 by rthome-d          #+#    #+#             */
/*   Updated: 2023/02/14 23:36:40 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*stack_new(long long int nbr, int index)
{
	t_stack	*nlst;

	nlst = (t_stack *) malloc (sizeof(t_stack));
	if (!nlst)
		return (0);
	nlst->nbr = (int)nbr;
	nlst->index = index;
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

void	stack_add_front(t_stack **stack, t_stack *new)
{
	new->next = *stack;
	*stack = new;
}
