/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:59:31 by rthome-d          #+#    #+#             */
/*   Updated: 2022/10/31 14:33:14 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"
#include "./libft/libft.h"

void	ft_argv_spliter (char **argv)
{
	char **spiter_out;
	
	spiter_out = ft_split(argv[1], ' ');
}

//void	ft_checker_inputs(char **av)
//{

//}



int	main (int argc, char **argv)
{
	int	index;
	
	

	index = 0;
	if (argc > 2)
	{
		while (argv[index])
		{
			ft_printf("%i\n", ft_atoi(argv[index]));
			index++;
		}
	}

	while (argv[index])
	{

	}
	ft_printf("\n");
	return (0);
}

//checar se tem caracter proibido
//checar se tem números repetidos
//verificar os formatos de entrada atômicos e compostos
//criar array de ints com os inputs passados
//  