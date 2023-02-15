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

void	rev_operations(t_stack ***stack, t_stack **tmp)
{
	int	nbr_aux1;
	int	nbr_aux2;
	int	idx_aux1;
	int	idx_aux2;

	nbr_aux1 = (*stack[0])->nbr;
	idx_aux1 = (*stack[0])->index;
	while ((*stack[0])->next)
	{
		*stack[0] = (*stack[0])->next;
		nbr_aux2 = (*stack[0])->nbr;
		(*stack[0])->nbr = nbr_aux1;
		nbr_aux1 = nbr_aux2;
		idx_aux2 = (*stack[0])->index;
		(*stack[0])->index = idx_aux1;
		idx_aux1 = idx_aux2;
	}
	*stack[0] = tmp[0];
	(*stack[0])->index = idx_aux1;
	(*stack[0])->nbr = nbr_aux1;
}	

void	rev_rotate(t_stack **stack, char stk)
{
	t_stack	*tmp;

	tmp = *stack;
	if ((*stack)->next)
		rev_operations(&stack, &tmp);
	ft_printf ("rr%c\n", (char)stk);
}
