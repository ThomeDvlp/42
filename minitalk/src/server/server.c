/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:48:13 by rthome-d          #+#    #+#             */
/*   Updated: 2022/08/25 19:39:11 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

static void	pid_monitor(void)
{
	ft_putstr_fd("SERVER_PID: ", 1);
	ft_printf("\e[32m%d\n", getpid());
	ft_printf("\x1b[0m");
}

static void	handler(int sig, siginfo_t *info, void *context)
{
	static int	counter;
	static char	character;

	(void)context;
	if (sig == SIGUSR2)
		character += 1 << (7 - counter);
	counter ++;
	if (counter == 8)
	{
		ft_printf("%c", character);
		if (character == '\0')
			kill(info->si_pid, SIGUSR2);
		counter = 0;
		character = 0;
	}
}

int	main(void)
{
	struct sigaction	s_sigaction;

	pid_monitor();
	s_sigaction.sa_sigaction = &handler;
	sigemptyset(&s_sigaction.sa_mask);
	s_sigaction.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s_sigaction, 0);
	sigaction(SIGUSR2, &s_sigaction, 0);
	while (1)
		pause();
	return (0);
}
