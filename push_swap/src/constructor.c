/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:55:32 by rthome-d          #+#    #+#             */
/*   Updated: 2022/10/27 17:16:10 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_frame		*create_frame(t_frame *frame, char *av)
{
	if (!(frame = (t_frame *)malloc(sizeof(t_frame))))
		exit(1);
	frame->a = NULL;
	frame->b = NULL;
	frame->av = NULL;
	frame->line = NULL;
	frame->str = NULL;
	frame->stack_len = 0;
	return (frame);
}
