/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:41:40 by amarchan          #+#    #+#             */
/*   Updated: 2021/12/10 20:26:10 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_args(char c, va_list args)
{
	int	ret;

	if (c == 'c')
		ret = ft_putchar_n(va_arg(args, int));
	if (c == 's')
		ret = ft_putstr_n(va_arg(args, char *));
	if (c == 'p')
	{
		write(1, "0x", 2);
		ret = ft_px(va_arg(args, long unsigned int), "0123456789abcdef") + 2;
	}
	if (c == 'd' || c == 'i')
		ret = ft_print_d(va_arg(args, int));
	if (c == 'u')
		ret = ft_print_u(va_arg(args, unsigned int));
	if (c == 'x')
		ret = ft_px(va_arg(args, unsigned int), "0123456789abcdef");
	if (c == 'X')
		ret = ft_px(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (c == '%')
		ret = ft_putchar_n('%');
	return (ret);
}

/*int	ft_count_percent(const char *s)
{
		int	i;
		int	len;
		i = 0;
		len = 0;

		while (s && (i + 1) <= ft_strlen((char *)s))
		{
			if (s[i] == '%' && s[i + 1] && s[i + 1] != '%')
				i++;
			len = i;
			i++;
		}
		return (len);
}*/

int	ft_printf(const char *echo, ...)
{
	va_list	args;
	int		i;
	int		len;
	//int		percent_count;

	va_start(args, echo);
	len = 0;
	i = 0;
	
	/*percent_count = ft_count_percent(echo);
	while (percent_count--)
	{
			if (!echo[i])
				ft_putstr_n("(nil)");
			i++;
			len++;
	}*/
	i = 0;
	while (echo[i])
	{
		if (echo[i] != '%')
		{
			ft_putchar(echo[i]);
			i++;
			len++;
		}
		if (echo[i] == '%')
		{
			i++;
			len = len + ft_print_args(echo[i], args);
			i++;
		}
	}
	va_end(args);
	return (len);
}
