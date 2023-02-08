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

void    rotate(t_stack **stack)
{
    t_stack *tmp;

    if ((*stack)->next == 0)
        return ;
    // tmp taked the first element of stack
    tmp = *stack;
    // Tmp goin to next node until hesn't the last node
    while (tmp->next)
        tmp = tmp->next;
    // The next of tmp or the "tail" of stack receive the first node as a next
    tmp->next = *stack;
    // With the first node "saved" like the next of tmp, we goin to avance one node in stack
    *stack = (*stack)->next;
    // 
    tmp->next->next = 0;
}