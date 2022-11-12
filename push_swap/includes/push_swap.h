/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:23:13 by rthome-d          #+#    #+#             */
/*   Updated: 2022/10/31 20:28:12 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h> 
# include <fcntl.h>

typedef struct		s_stack
{
	long int		nbr;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

typedef struct		s_frame
{
	struct s_stack	*a;
	struct s_stack	*b;

	char			**av;
	char			*line;
	char			*str;

	int				stack_len;
}					t_frame;

#endif
