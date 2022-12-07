/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:59:31 by rthome-d          #+#    #+#             */
/*   Updated: 2022/12/07 18:39:39 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"




int	main (int argc, char **argv)
{
	int	index;
	int counter;
	char **argv_splited;

	index = 0;
	counter = -1;
	if (argc >= 2)
	{	
		while(++index < argc)
		{
			argv_splited = ft_split(argv[index], ' ');
			if (!input_checker(argv_splited))
				ERROR			
			while(argv_splited[++counter])			
					ft_printf("%s\n", argv_splited[counter]);
			counter = -1;
		}
	}
	return (0);
}