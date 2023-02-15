/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:12:34 by rthome-d          #+#    #+#             */
/*   Updated: 2022/12/17 12:12:34 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	constructor(int argc, char **av, t_stack **stack_a)
{
	int	aux;

	aux = -1;
	while (++aux < argc)
		stack_add_back(stack_a, stack_new(ft_atoi(av[aux]), 0));
}
