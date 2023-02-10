/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:11:34 by rthome-d          #+#    #+#             */
/*   Updated: 2023/02/10 15:04:39 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		*ar_index(int argc, char **argv)
{
    int	i;
    int	tmp;
    int	*list;
    
    list = malloc(sizeof(int) * (argc - 1));
    i = 0;
    while (i <= argc -2 )
    {
        list[i] = (int)ft_atoi(argv[i]);
        i++;
    }
    i = 0;
    while(i <= argc - 3)
    {
        tmp = list[i];
        if (list[i] > list[i + 1])
        {
            list[i] = list[i+1];
            list[i + 1] = tmp;
			i = 0;
        }
		else        
			i++;
    }
    return list;
}

void	index_populate(int argc, int *ar_index, t_stack **stack_a)
{
	int i;
    t_stack *tmp;

    tmp = *stack_a;

	
    
	while ((*stack_a)->next)
	{
        i = 0;
		while(i <= argc - 2)
		{
			if((*stack_a)->nbr == ar_index[i])
            {
				(*stack_a)->index = i;
                break;
            }
            i++;
		}
		
		*stack_a = (*stack_a)->next;
	}
    *stack_a = tmp;
}