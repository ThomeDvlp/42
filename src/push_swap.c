/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:59:31 by rthome-d          #+#    #+#             */
/*   Updated: 2023/02/10 18:35:14 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_stack **stack_a)
{
	t_stack	*temp;

	temp = *stack_a;
	while (temp != NULL)
	{
		ft_printf("nbr/: [%i]\n", temp->nbr);
		ft_printf("index/: [%i]\n", temp->index);
		temp = temp->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**final_argv;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	i = 0;
	if (argc >= 1)
	{
		if (argc == 2)
		{
			final_argv = ft_split(*(argv + 1), ' ');
			argc = 0;
			while (final_argv[argc])
				argc++;
			argc++;
		}
		else
			final_argv = (argv + 1);
		if (!input_checker(final_argv))
		{
			ERROR
			return (0);
		}
		constructor(argc - 1, final_argv, &stack_a);
		index_populate(argc, ar_index(argc, final_argv), &stack_a);
	}
	return (0);
}
