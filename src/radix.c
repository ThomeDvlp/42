/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:46:48 by rthome-d          #+#    #+#             */
/*   Updated: 2023/02/13 22:07:35 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	max_bits(int max_index)
{
	int	i;

	i = 0;
	while (max_index >> i)
		i++;
	return (i);
}

void	radix(int argc, t_stack **stack_a, t_stack **stack_b)
{
	int	n_bits;
	int	counter_a;
	int	counter_b;
	int	i;

	n_bits = max_bits(argc);
	i = -1;
	counter_b = 0;
	while (++i < n_bits)
	{
		counter_a = argc;
		while (--counter_a)
		{
			if ((*stack_a)->index & 1 << i)
				rotate(stack_a, 'a');
			else
			{
				push(stack_a, stack_b, 'b');
				counter_b++;
			}
		}
		counter_b++;
		while (--counter_b)
			push(stack_b, stack_a, 'a');
	}
}
