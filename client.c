/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:11:49 by ngnguyen          #+#    #+#             */
/*   Updated: 2023/05/22 14:07:23 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_action(pid_t pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (c & (0x01 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit++;
		usleep(500);
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	int		i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			signal_action(pid, argv[2][i]);
			i++;
		}
		signal_action(pid, '\n');
	}
	else
	{
		ft_printf("Wrong format\n");
		return (1);
	}
	return (0);
}
