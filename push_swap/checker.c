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



int	is_int(char **argv_splited)
{
	int index;
	int counter;
	long long nbr;

	index = -1;
	counter = -1;
	while (argv_splited[++index])
	{
		nbr = ft_atoi(argv_splited[index]);
		if ((argv_splited[index][0] == '-' || argv_splited[index][0] == '+')
			&& argv_splited[index][1])
			counter ++;
		while(argv_splited[index][++counter])
			if(!ft_isdigit(argv_splited[index][counter]))
				return(0);
		if((nbr > MAX || nbr < MIN) || ft_strlen(argv_splited[index]) > 10)
			return (0);
        counter = -1;
	}
	return (1);
}

//int ft_isUnique()

int input_checker(char **argv)
{
    if(!is_int(argv))
        return (0);
    return (1);
}