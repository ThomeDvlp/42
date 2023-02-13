/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:17:02 by rthome-d          #+#    #+#             */
/*   Updated: 2022/11/24 17:17:02 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	is_int(char **av)
{
	int			index;
	int			counter;
	long long	nbr;

	index = -1;
	counter = -1;
	while (av[++index])
	{
		nbr = ft_atoi(av[index]);
		while ((av[index][0] == '-' || av[index][0] == '+') && av[index][1])
			counter ++;
		while (av[index][++counter])
		{
			if ((!ft_isdigit(av[index][counter]))
				|| ((nbr > MAX || nbr < MIN) || ft_strlen(av[index]) > 11))
			{
				ft_printf("Error\n");
				return (0);
			}
		}
		counter = -1;
	}
	return (1);
}

static int	is_unique(char **av)
{
	int	index;
	int	counter;

	index = -1;
	while (av[++index])
	{
		counter = index;
		while (av[++counter])
		{
			if (ft_atoi(av[index]) == ft_atoi(av[counter]))
			{
				ft_printf("Error\n");
				return (0);
			}
		}
	}
	return (1);
}

static int	is_ordered(char **av)
{
	int	i;

	i = 0;
	while (av[i + 1])
	{
		if (ft_atoi(av[i]) < ft_atoi(av[i + 1]))
			i++;
		else
		{
			ft_printf("\n");
			return (1);
		}
	}
	return (0);
}

// {"1", "12", "234", "7", "+7"}
int	input_checker(char **av)
{
	if (!is_int(av) || !is_unique(av) || !is_ordered(av))
		return (0);
	return (1);
}
