/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:42:52 by skarayil          #+#    #+#             */
/*   Updated: 2025/06/27 19:03:44 by skarayil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int	ft_printf(const char *input, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *str);
int	ft_putnbr(int n);
int	ft_putnbr_base(unsigned long n, char *base);
int	ft_putunbr(unsigned int n);
int	ft_putptr(void *ptr);
int	ft_puthex(unsigned int n, char format);

#endif