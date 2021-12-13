/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:59:53 by amarchan          #+#    #+#             */
/*   Updated: 2021/12/10 20:02:56 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_n(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putstr_n(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
	{
		write(1, "(null)", 6);	
			return (6);
	}
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_print_u(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb > 9)
	{
		len += ft_print_u(nb / 10);
		len += ft_print_u(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
		len++;
	}
	return (len);
}

int	ft_print_d(int nb)
{
	int	len = 0;

	len = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		len = 11;
		return (len);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		len++;
	}
	if (nb > 9)
	{
		len += ft_print_d(nb / 10);
		len +=ft_print_d(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
		len++;
	}
	return (len);
}
