/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:43:24 by skarayil          #+#    #+#             */
/*   Updated: 2025/06/27 19:06:08 by skarayil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	ret;
    if (c == '\0')
        return (write(1, "", 0));
	ret = write(1, &c, 1);
	if (ret == -1)
		return (-1);
	return (ret);
}

int	ft_putstr(const char *str)
{
	int	ret_t;
	int	ret;
	int	i;

	ret_t = 0;
	i = 0;
	if (str == NULL)
	{
		ret = write(1, "(null)", 6);
		if (ret == -1)
			return (-1);
		return (ret);
	}
	while (str[i] != '\0')
	{
		ret = write(1, &str[i], 1);
		if (ret == -1)
			return (-1);
		ret_t += ret;
		i++;
	}
	return (ret_t);
}

static int	ft_putnbr_neg(int *ptr, int *count)
{
	int	ret;

	ret = ft_putchar('-');
	if (ret == -1)
		return (-1);
	*count += ret;
	*ptr = -(*ptr);
	return (1);
}

int	ft_putnbr(int n)
{
	int		ret;
	int		count;

	count = 0;
	if (n == INT_MIN)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	if (n < 0)
	{
		ret = ft_putnbr_neg(&n, &count);
		if (ret == -1)
			return (-1);
	}
	if (n > 9)
	{
		ret = ft_putnbr(n / 10);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	ret = ft_putchar((n % 10) + '0');
	if (ret == -1)
		return (-1);
	count += ret;
	return (count);
}
