/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:59:31 by rthome-d          #+#    #+#             */
/*   Updated: 2023/02/15 13:07:29 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	argv_pliter(int argc, char **argv, char **final_argv)
{
	int	i;

	i = -1;
	final_argv = ft_split(*(argv + 1), ' ');
	argc = 0;
	while (final_argv[argc])
		argc++;
	argc++;
	while (final_argv[++i])
		free (final_argv[i]);
	free (final_argv);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**final_argv;

	stack_a = NULL;
	stack_b = NULL;
	final_argv = NULL;
	if (argc > 1)
	{
		if (argc == 2)
			argv_pliter(argc, argv, final_argv);
		else
			final_argv = (argv + 1);
		if (!input_checker(final_argv))
			return (0);
		constructor(argc - 1, final_argv, &stack_a);
		index_populate(argc, ar_index(argc, final_argv), &stack_a);
		organizer(argc, &stack_a, &stack_b);
		free_stk(&stack_a);
	}
	return (0);
}
