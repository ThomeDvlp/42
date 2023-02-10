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
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next->next)
		tmp = tmp->next;
	stack_add_front (stack, tmp->next);
	tmp->next = 0;
	ft_printf ("rr%c\n", (char)stk);
}
