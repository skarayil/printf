/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:43:24 by skarayil          #+#    #+#             */
/*   Updated: 2025/06/27 17:54:47 by skarayil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, char *base)
{
	int	i;
	int	len;
	int	ret;

	i = 0;
	len = 0;
	if (!base)
		return (-1);
	while (base[len])
		len++;
	if (n >= (unsigned long)len)
	{
		ret = ft_putnbr_base(n / len, base);
		if (ret == -1)
			return (-1);
		i += ret;
	}
	ret = ft_putchar(base[n % len]);
	if (ret == -1)
		return (-1);
	i += ret;
	return (i);
}

int	ft_putunbr(unsigned int n)
{
	return (ft_putnbr_base(n, "0123456789"));
}

int	ft_putptr(void *ptr)
{
	int	i;
	int	ret;

	ret = 0;
	if (!ptr)
	{
		ret = ft_putstr("(nil)");
		if (ret == -1)
			return (-1);
		return (ret);
	}
	ret = ft_putstr("0x");
	if (ret == -1)
		return (-1);
	i = ft_putnbr_base((unsigned long)ptr, "0123456789abcdef");
	if (i == -1)
		return (-1);
	return (i + ret);
}

int	ft_puthex(unsigned int n, char format)
{
	int		ret;
	char	*base;

	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	ret = ft_putnbr_base(n, base);
	if (ret == -1)
		return (-1);
	return (ret);
}
