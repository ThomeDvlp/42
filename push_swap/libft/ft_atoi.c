/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:46:05 by rthome-d          #+#    #+#             */
/*   Updated: 2022/11/30 15:56:59 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
	este atoi recebe uma string e durante a conversão 
	realiza o teste a cada caractere para verificar se é
	um dígito (0-9) ou sinal ( - + ), do contrário retorna erro...



	dica: use uma função de quit para encerrar o programa já neste ponto em caso se erro...
	Obs.: dê free se for necessário em elementos que sofreram alocação dinâmica...
*/
long long int	ft_atoi(const char *str)
{
	long long int	res;
	long long int	signal_setter;

	res = 0;
	signal_setter = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		signal_setter = -1;
	if (*str == '-' || *str == '+')
		str++;
	//while (*str >= '0' && *str <= '9')
	while (*str)
	{
		if(*str >= '0' && *str <= '9')
		{
			res = res * 10 + *str - '0';
							
		}
		else 
			exit (0);
		str++;
	}
	return (res * signal_setter);
}
// estou editando rapaz \ ( '0' ) /