/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:59:31 by rthome-d          #+#    #+#             */
/*   Updated: 2022/11/25 18:47:13 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"
# include "./libft/libft.h"
/*
void	ft_argv_spliter (char **argv)
{
	char **spiter_out;
	
	spiter_out = ft_split(argv[1], ' ');
}
*/

int	ft_isInt(char **argv)
{
	int index;
	
	index = 1;
	while (argv[index])
	{
		if(ft_atoi(argv[index]) > 2147483647 
			|| ft_atoi(argv[index]) < -2147483648)
			{
				ft_printf("Error\n");
				return (1);
			}
			
		index++;
		return (0);
	}
	
}


int	main (int argc, char **argv)
{
	int	index;
	int counter;

	index = 0;
	counter = 0;
	if (argc > 2)
	{	
		//while(argv[++counter])
		//{
		//	if(ft_atoi(argv[counter]) > 2147483647 
		//		|| ft_atoi(argv[counter]) < -2147483648)
		//	{
		//		ft_printf("ERROR\n");
		//		return (1);
		//	}
	//	}

		while (argv[++index])
			ft_printf("%i\n", ft_atoi(argv[index]));

	}
	return (0);
}

// Usar split ou/e join_args para o argv;
//checar se tem numero repetido
//Checar se tem letra (* +-)
//verificar os formatos de entrada atômicos e compostos
//criar array de ints com os inputs passados
//  
//
//  if (check_args)
//  {
//		receive_values(list_a);
//		sort();
//		quit();
//  }
