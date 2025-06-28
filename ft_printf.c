/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:42:22 by skarayil          #+#    #+#             */
/*   Updated: 2025/06/28 12:59:32 by skarayil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_uk_format(char uk)
{
	int	ret;
	int	ret_t;

	ret = ft_putchar('%');
	if (ret != -1)
	{
		ret_t = ft_putchar(uk);
		if (ret_t == -1)
			ret = -1;
		else
			ret += ret_t;
	}
	return (ret);
}

static int	ft_print_format(const char *input, va_list *args, int *i)
{
	int	ret;

	ret = 0;
	if (input[*i + 1] == 'c')
		ret = ft_putchar(va_arg(*args, int));
	else if (input[*i + 1] == 's')
		ret = ft_putstr(va_arg(*args, char *));
	else if (input[*i + 1] == 'p')
		ret = ft_putptr(va_arg(*args, void *));
	else if (input[*i + 1] == 'd' || input[*i + 1] == 'i')
		ret = ft_putnbr(va_arg(*args, int));
	else if (input[*i + 1] == 'u')
		ret = ft_putunbr(va_arg(*args, unsigned int));
	else if (input[*i + 1] == 'x' || input[*i + 1] == 'X')
		ret = ft_puthex(va_arg(*args, unsigned int), input[*i + 1]);
	else if (input[*i + 1] == '%')
		ret = ft_putchar('%');
	else
		ret = ft_uk_format(input[*i + 1]);
	if (ret == -1)
		return (-1);
	return (ret);
}

static int	ft_format(const char *input, va_list *args, int *i)
{
	int	ret;

	if (input[*i] == '%')
	{
		ret = ft_print_format(input, args, i);
		if (ret == -1)
			return (-1);
		(*i)++;
		return (ret);
	}
	else
	{
		ret = ft_putchar(input[*i]);
		if (ret == -1)
			return (-1);
	}
	return (ret);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		count;
	int		ret;
	int		i;

	i = 0;
	count = 0;
	if (!input)
		return (-1);
	va_start(args, input);
	while (input[i] != '\0')
	{
		ret = ft_format(input, &args, &i);
		if (ret == -1)
		{
			va_end(args);
			return (-1);
		}
		count += ret;
		i++;
	}
	va_end(args);
	return (count);
}
