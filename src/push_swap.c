/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:59:31 by rthome-d          #+#    #+#             */
/*   Updated: 2023/02/15 18:47:45 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	free_spliter(char ***final_argv, int spliter_free)
{
	int	i;

	if (!spliter_free)
		return (0);
	i = -1;
	while (final_argv[0][++i])
		free (final_argv [0][i]);
	free (final_argv[0]);
	return (0);
}

int	argv_pliter(int *argc, char **argv, char ***final_argv)
{
	final_argv[0] = ft_split(*(argv + 1), ' ');
	*argc = 0;
	while (final_argv[0][*argc])
		*argc += 1;
	*argc += 1;
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**final_argv;
	int		spliter_free;

	stack_a = NULL;
	stack_b = NULL;
	final_argv = NULL;
	spliter_free = 0;
	if (argc > 1)
	{
		if (argc == 2)
			spliter_free = argv_pliter(&argc, argv, &final_argv);
		else
			final_argv = (argv + 1);
		if (!input_checker(final_argv))
			return (free_spliter(&final_argv, spliter_free));
		constructor(argc - 1, final_argv, &stack_a);
		index_populate(argc, ar_index(argc, final_argv), &stack_a);
		organizer(argc, &stack_a, &stack_b);
		free_stk(&stack_a);
	}
	return (free_spliter(&final_argv, spliter_free));
}
