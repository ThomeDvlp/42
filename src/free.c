/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:41:57 by rthome-d          #+#    #+#             */
/*   Updated: 2023/02/14 14:57:28 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stk(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*tmp_nxt;

	tmp = *stack_a;
	tmp_nxt = (*stack_a)->next;
	while (tmp_nxt)
	{
		free (tmp);
		tmp = tmp_nxt;
		tmp_nxt = tmp_nxt->next;
	}
}
