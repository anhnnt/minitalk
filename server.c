/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:11:27 by ngnguyen          #+#    #+#             */
/*   Updated: 2023/05/22 14:06:39 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_handler(int signal)
{
	static int	bit;
	static int	i;

	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid_id;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Wrong format!\n");
		return (1);
	}
	pid_id = getpid();
	ft_printf("Server ID: %d\n", pid_id);
	ft_printf("Waiting for the signal\n");
	while (argc == 1)
	{
		signal(SIGUSR1, signal_handler);
		signal(SIGUSR2, signal_handler);
		pause();
	}
	return (0);
}
