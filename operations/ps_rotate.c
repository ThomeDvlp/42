/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:40:16 by rthome-d          #+#    #+#             */
/*   Updated: 2023/02/07 17:40:16 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_stack **stack, char stk)
{
	t_stack *tmp;
	int nbr_aux;
	int idx_aux;

	nbr_aux = (*stack)->nbr;
	idx_aux = (*stack)->index;
	tmp = NULL;
	if(!(*stack)->next)
	{
		(*stack)->nbr = nbr_aux;
		(*stack)->next = NULL;
	}
	else
	{
		tmp = *stack;
		while ((*stack)->next)
		{
			(*stack)->index = (*stack)->next->index;
			(*stack)->nbr = (*stack)->next->nbr;
			*stack = (*stack)->next;
		}
		(*stack)->index = idx_aux;
		(*stack)->nbr = nbr_aux;
		*stack = tmp;
	}
	ft_printf("r%c\n", stk);
}
