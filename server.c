/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:11:27 by ngnguyen          #+#    #+#             */
/*   Updated: 2023/02/21 15:53:59 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

// void	server_handle()
// {

// }

struct sigaction	sact;
sigset_t			sigset;

void	addsignal1()
{
	sigemptyset(&sact.sa_mask); // sa_mask: signal mask to apply
	sact.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sact, NULL);

	sigemptyset(&sigset);
	sigaddset(&sigset, SIGUSR1);
	kill(getpid(), SIGUSR1);
}

void	addsignal2()
{
	sigemptyset(&sact.sa_mask); // sa_mask: signal mask to apply
	sact.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR2, &sact, NULL);

	sigemptyset(&sigset);
	sigaddset(&sigset, SIGUSR2);
	kill(getpid(), SIGUSR2);
}

int	main(void)
{
	int	pid_id = getpid();
	printf("Server ID: %d\n", pid_id);
	
	printf("Waiting for the signal");

	pause();
	return (0);
}
