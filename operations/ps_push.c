/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 09:42:49 by rthome-d          #+#    #+#             */
/*   Updated: 2022/12/19 09:42:49 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_stack **stack_src, t_stack **stack_dst, char stk)
{
	t_stack	*tmp;

	if (!*stack_src)
		return ;
	stack_add_front(stack_dst, stack_new((long long int)(*stack_src)->nbr, (*stack_src)->index));
	tmp = *stack_src;
	*stack_src = (*stack_src)->next;
	free (tmp);
	ft_printf("p%c\n", (char)stk);
}
