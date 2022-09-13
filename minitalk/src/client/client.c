/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:36:18 by rthome-d          #+#    #+#             */
/*   Updated: 2022/08/26 12:56:59 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

static void	handler(int sig)
{
	if (sig == SIGUSR2)
		ft_printf("Signal Received\n");
}

static void	char_to_bit(int pid, unsigned char character)
{
	int	counter;

	counter = 8;
	while (counter-- > 0)
	{
		if (!(character & 0x80))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(200);
		character = character << 1;
	}
}

int	main(int argc, char **argv)
{
	int	counter;
	int	pid;

	pid = ft_atoi(argv[1]);
	if (argc != 3 || !ft_strlen(argv[2]))
	{
		ft_putstr_fd("client: invalid arguments.\n", 2);
		ft_putstr_fd("correct format: [./client <PID> <STR>].\n", 2);
		exit (1);
	}
	signal(SIGUSR2, handler);
	ft_printf("Sent	: ");
	ft_putnbr_fd(ft_strlen(argv[2]), 1);
	ft_printf(" characters\n");
	counter = 0;
	while (argv[2][counter])
	{
		char_to_bit(pid, argv[2][counter]);
		counter++;
	}
	char_to_bit(pid, argv[2][counter]);
	exit (EXIT_SUCCESS);
}
