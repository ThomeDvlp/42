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

int stack_len (t_stack *stack)
{
    int len;

    len = 0;
    while(stack)
    {
        len++;
        stack = stack->next;
    }
    return (len);
}

void    swap(t_stack **stack, char stk)
{
    t_stack *tmp;
    if((*stack)->next != 0)
    {
        tmp = *stack;
        *stack = (*stack)->next;
        tmp->next = (*stack)->next;
        (*stack)->next = tmp;
    }
    ft_printf("s%c\n", stk);
}