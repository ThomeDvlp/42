/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:23:13 by rthome-d          #+#    #+#             */
/*   Updated: 2022/12/07 18:01:38 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define ERROR 		{\
						ft_printf("Error\n");\
						return(1);\
					}	
# define MAX 2147483647
# define MIN -2147483648
# include <unistd.h>
# include <stdlib.h> 
# include <fcntl.h>
# include "../libft/libft.h"

typedef struct		s_stack
{
	long long int		nbr;
	int size;
}					t_stack;

typedef struct		s_frame
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		args;
	int	 	*reference;
}					t_frame;

int input_checker(char **argv_splited);
#endif
