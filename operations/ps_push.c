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

void    push(t_stack *stack_a, t_stack *stack_b)
{
    t_stack *tmp;

    tmp = stack_b;
    stack_b = stack_a;
    stack_a = stack_b->next;
    stack_b->next = tmp;
}
