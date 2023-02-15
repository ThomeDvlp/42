/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:18:38 by rthome-d          #+#    #+#             */
/*   Updated: 2023/02/02 15:18:38 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	stack_len(t_stack *stack)
{
	int	len;

	len = 0;
	while (stack)
	{
		len++;
		stack = stack->next;
	}
	return (len);
}

void	swap(t_stack **stack, char stk)
{
	int	aux;

	if ((*stack)->next != 0)
	{
		aux = (*stack)->nbr;
		(*stack)->nbr = (*stack)->next->nbr;
		(*stack)->next->nbr = aux;
		aux = (*stack)->index;
		(*stack)->index = (*stack)->next->index;
		(*stack)->next->index = aux;
	}
	ft_printf("s%c\n", stk);
}
