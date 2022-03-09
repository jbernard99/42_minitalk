/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:24:57 by jbernard          #+#    #+#             */
/*   Updated: 2022/03/08 10:39:30 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <stdio.h>
# include <signal.h>
# include <sys/types.h>

size_t  ft_strlen(char *str);
void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putnbr(int nb);
int     ft_atoi(const char *str);

#endif