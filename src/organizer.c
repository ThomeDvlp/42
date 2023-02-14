/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organizer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:00:34 by rthome-d          #+#    #+#             */
/*   Updated: 2023/02/13 20:31:23 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	two(t_stack *stack_a)
{
	swap(&stack_a, 'a');
}

void	three(t_stack *stack_a)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = stack_a->nbr;
	n2 = stack_a->next->nbr;
	n3 = stack_a->next->next->nbr;
	if (n1 < n2 && n1 < n3 && n2 > n3)
	{
		swap(&stack_a, 'a');
		rotate(&stack_a, 'a');
	}
	if (n1 > n2 && n1 < n3 && n2 < n3)
		swap(&stack_a, 'a');
	if (n1 < n2 && n1 > n3 && n2 > n3)
		rev_rotate(&stack_a, 'a');
	if (n1 > n2 && n1 > n3 && n2 > n3)
	{
		swap(&stack_a, 'a');
		rev_rotate(&stack_a, 'a');
	}
	if (n1 > n2 && n1 > n3 && n2 < n3)
		rotate(&stack_a, 'a');
}

void	four(t_stack *stack_a, t_stack *stack_b)
{
	while ((*stack_a).index != 0)
		rotate(&stack_a, 'a');
	push(&stack_a, &stack_b, 'b');
	three(stack_a);
	push(&stack_b, &stack_a, 'a');
}

void	five(t_stack *stack_a, t_stack *stack_b)
{
	while ((*stack_a).index != 0)
		rotate(&stack_a, 'a');
	push(&stack_a, &stack_b, 'b');
	while ((*stack_a).index != 1)
		rotate(&stack_a, 'a');
	push(&stack_a, &stack_b, 'b');
	three(stack_a);
	push(&stack_b, &stack_a, 'a');
	push(&stack_b, &stack_a, 'a');
}

void	organizer(int argc, t_stack **stack_a, t_stack **stack_b)
{
	if (argc - 1 == 2)
		two(*stack_a);
	if (argc - 1 == 3)
		three(*stack_a);
	if (argc - 1 == 4)
		four(*stack_a, *stack_b);
	if (argc - 1 == 5)
		five(*stack_a, *stack_b);
	if (argc - 1 > 5)
		radix(argc, stack_a, stack_b);
}
