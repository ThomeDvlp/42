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

void	rtt_oparations(t_stack ***stack, t_stack **tmp, int nbr, int idx)
{
	while ((*stack[0])->next)
	{
		(*stack[0])->index = (*stack[0])->next->index;
		(*stack[0])->nbr = (*stack[0])->next->nbr;
		*stack[0] = (*stack[0])->next;
	}
	(*stack[0])->index = idx;
	(*stack[0])->nbr = nbr;
	*stack[0] = tmp[0];
}

void	rotate(t_stack **stack, char stk)
{
	t_stack	*tmp;
	int		nbr_aux;
	int		idx_aux;

	nbr_aux = (*stack)->nbr;
	idx_aux = (*stack)->index;
	tmp = NULL;
	if (!(*stack)->next)
	{
		(*stack)->nbr = nbr_aux;
		(*stack)->next = NULL;
	}
	else
	{
		tmp = *stack;
		rtt_oparations(&stack, &tmp, nbr_aux, idx_aux);
	}
	ft_printf("r%c\n", stk);
}
