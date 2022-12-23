/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:11:27 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/12/23 18:16:46 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

// void	server_handle()
// {

// }

int	main(void)
{
	int	pid_id = getpid();
	printf("Server ID: %d\n", pid_id);
	
	printf("Waiting for the signal");

	pause();
	return (0);
}
