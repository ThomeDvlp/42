/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:59:31 by rthome-d          #+#    #+#             */
/*   Updated: 2022/11/30 15:17:31 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"
# include "./libft/libft.h"

/*
void 	**ft_argv_processor (char **argv)
{
	char **spliter_out;
	
	spiter_out = ft_split(argv[1], ' ');
	return (spliter_out);
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

/*
int	is_int(t_frame *frame)
{
	int	index;
	int	aux;

	index = 0;
	while (index < frame->stack_a.size)
	{
		if (frame->stack_a.content[index] > 2147483647
			|| frame->stack_a.content[index] < -2147483648)
			return (0);
		aux = 0;
		while (aux < frame->stack_a.size)
		{
			if (frame->stack_a.content[index] == frame->stack_a.content[aux] && index != aux)
				return (0);
			aux++;
		}
		index++;
	}
	return (1);
}


int	parse_referene(t_data *frame)
{
	int	index;

	index = 0;
	frame->reference = calloc(frame->num_args, sizeof(long long int));
	while (index < frame->num_args)
	{
		frame->reference[index] = frame->stack_a.content[index];
		index++;
	}
	return (0);
}
*/
int	main (int argc, char **argv)
{
	//t_frame frame;

	int	index;
	int counter;

	index = 0;
	counter = 0;



	if (argc > 2)
	{	
/*		
		while(argv[++counter])
		{
			
			if(ft_atoi(argv[counter]) > 2147483647 
				|| ft_atoi(argv[counter]) < -2147483648)
			{
				ft_printf("ERROR\n");
				return (1);
			}


		}
*/
		while (argv[++index])
		{
			char **argv_splited;
			counter = -1;
			if(argv[index][1] != '0')
			{
				argv_splited = ft_split(argv[index], ' ');
				
				if(ft_atoi(argv_splited[counter + 1]) > 2147483647 
					|| ft_atoi(argv_splited[counter + 1]) < -2147483648)
				{
					ft_printf("ERROR\n");
					return (1);
				}
				//if(ft_isInt(argv_splited[counter+1]) == 0)			
				while (argv_splited[++counter])
					ft_printf("| %i |\n", ft_atoi(argv_splited[counter]));
			}
		}	
		
	}
	/*if (!parse_stacks(&frame, argc - 1, argv))
		error ("Error\n", &frame);
	parse_referene(&frame);	
	return (0);
	*/
}

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
