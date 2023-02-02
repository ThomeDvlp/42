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

#include "./includes/push_swap.h"

static int	is_int(char **argv)
{
	int index;
	int counter;
	long long nbr;

	index = -1;
	counter = -1;
	while (argv[++index])
	{
		nbr = ft_atoi(argv[index]);
		if ((argv[index][0] == '-' || argv[index][0] == '+')
			&& argv[index][1])
			counter ++;
		while(argv[index][++counter])
			if(!ft_isdigit(argv[index][counter]))
				return(0);
		if((nbr > MAX || nbr < MIN) || ft_strlen(argv[index]) > 11)
			return (0);
        counter = -1;
	}
	return (1);
}


static int is_unique(char **argv)
{
	int	index;
	int	counter;
	index = -1;

	while (argv[++index])
	{
		counter = index;
		while (argv[++counter])
		{
			if (ft_atoi(argv[index]) == ft_atoi(argv[counter]))
				return (0);
		}
	}
	return (1);
}

// {"1", "12", "234", "7", "+7"}
int input_checker(char **argv)
{
	if(!is_int(argv) || !is_unique(argv))
		return (0);
    return (1);
}