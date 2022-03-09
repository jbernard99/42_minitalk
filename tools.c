/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:24:21 by jbernard          #+#    #+#             */
/*   Updated: 2022/03/08 10:53:02 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

size_t ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		nbr %= 10;
	}
	ft_putchar(nbr + '0');
}

int	ft_atoi(const char *str)
{
	long			total;
	int				i;
	int				sign;

	total = 0;
	i = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - '0');
		i++;
		if (total * sign > 2147483647)
			return (-1);
		if (total * sign < -2147483648)
			return (0);
	}
	return (sign * total);
}
