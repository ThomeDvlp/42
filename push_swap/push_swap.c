/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:59:31 by rthome-d          #+#    #+#             */
/*   Updated: 2022/12/05 13:33:27 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"
# include "./libft/libft.h"


int	main (int argc, char **argv)
{
	//t_frame frame;

	int	index;
	int counter;

	index = 0;
	counter = 0;

	int	len;

	len = 0;

	if (argc >= 2)
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
			char stack_a;
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
				{
					if(ft_atoi(argv_splited[counter]) > 2147483647 
						|| ft_atoi(argv_splited[counter]) < -2147483648)
					{
						ft_printf("ERROR\n");
						return (1);
					}
					ft_printf("| %d |\n", ft_atoi(argv_splited[counter]));
					len++;	
					ft_printf("len = %i\n", len);
				}

			}
			
		}	
		
	}
}