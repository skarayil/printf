/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:43:24 by skarayil          #+#    #+#             */
/*   Updated: 2025/06/27 23:19:20 by skarayil         ###   ########.fr       */
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

static int	ft_putnbr_neg(long *ptr, int *count)
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
	long	nbr;
	int		ret;
	int		count;

	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		ret = ft_putnbr_neg(&nbr, &count);
		if (ret == -1)
			return (-1);
	}
	if (nbr > 9)
	{
		ret = ft_putnbr(nbr / 10);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	ret = ft_putchar((nbr % 10) + '0');
	if (ret == -1)
		return (-1);
	count += ret;
	return (count);
}
