/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:44:43 by sameye            #+#    #+#             */
/*   Updated: 2021/10/05 17:24:13 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int getlen(long j, long base)
{
	int len;

	if (j == 0)
		return (1);
	len = 0;
	while (j > 0)
	{
		j = j / base;
		len++;
	}
	return (len);
}

long ft_pow(long i, int base)
{
	int iter;
	long res;

	res = 1;
	iter = 0;
	while (iter < i)
	{
		res = res * base;
		iter++;
	}
	return (res);
}

int ft_printd(int i)
{
	long j;
	int count;
	int len;
	int temp;

	count = 0;
	j = i;
	if (j < 0)
	{
		j = -j;
		count += ft_putchar('-');
	}
	len = getlen(j, 10);
	while (len > 0)
	{
		temp = j / ft_pow(len - 1, 10);
		count += ft_putchar(temp % 10 + '0');
		len--;
	}
	return (count);
}

int ft_printx(int j)
{
	int count;
	int len;
	int temp;

	count = 0;
	len = getlen(j, 16);
	while (len > 0)
	{
		temp = (j / ft_pow(len - 1, 16)) % 16;
		if (temp <= 9)
			count += ft_putchar(temp + '0');
		else
			count += ft_putchar(temp - 10 + 'a');
		len--;
	}
	return (count);
}

int ft_prints(char *s)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (s[i])
	{
		count += ft_putchar(s[i]);
		i++;
	}
	return (count);
}

int ft_printf(const char *fmt, ...)
{
	va_list ap;
	int i;
	int count;

	if (fmt == NULL)
		return (0);
	va_start(ap, fmt);
	count = 0;
	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			i++;
			if (fmt[i] == 's')
				count += ft_prints(va_arg(ap, char *));
			if (fmt[i] == 'd')
				count += ft_printd(va_arg(ap, int));
			if (fmt[i] == 'x')
				count += ft_printx(va_arg(ap, long));
		}
		else
			count += ft_putchar(fmt[i]);
		i++;
	}
	va_end(ap);
	return (count);
}