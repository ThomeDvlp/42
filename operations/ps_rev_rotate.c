/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:55:55 by rthome-d          #+#    #+#             */
/*   Updated: 2023/02/07 17:55:55 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rev_rotate(t_stack **stack, char stk)
{
/* 	int 

	

	if(!(*stack)->next)
		return;
	else
	{
		while(tmp->next)
			tmp = tmp->next;
		while((*stack)->next)
			(*stack)->next = 0;
		
	} */
	int nbr_aux1;
	int nbr_aux2;
	int idx_aux1;
	int idx_aux2;

	t_stack *tmp = *stack;

	if((*stack)->next)
	{
		nbr_aux1 = (*stack)->nbr;
		idx_aux1 = (*stack)->index;
		while ((*stack)->next)
		{
			*stack = (*stack)->next;
			nbr_aux2 = (*stack)->nbr;
			(*stack)->nbr = nbr_aux1;
			nbr_aux1 = nbr_aux2;
			idx_aux2 = (*stack)->index;
			(*stack)->index = idx_aux1;
			idx_aux1 = idx_aux2;
		}
		*stack = tmp;
		(*stack)->index = idx_aux1;
		(*stack)->nbr = nbr_aux1;
	} 
	ft_printf ("rr%c\n", (char)stk);
}
