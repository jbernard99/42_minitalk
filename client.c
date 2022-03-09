/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:23:52 by jbernard          #+#    #+#             */
/*   Updated: 2022/03/09 10:32:26 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"


void    signal_char(pid_t pid, char c)
{
	int bit;

	bit = 0;
	printf("pid : %d\nc : %c", pid, c);
	while (bit < 8)
	{
		if (c & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit++;
		usleep(100);
	}
}

void    send_message(pid_t pid, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		signal_char(pid, str[i]);
		i++;
	}
	signal_char(pid, '\0');
}

int main(int argc, char *argv[])
{
	pid_t   pid;
	char    *str;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		str = argv[2];
		send_message(pid, str);
	}
	else
		ft_putstr("Error!\n");
	return (0);
}

