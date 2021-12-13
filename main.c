/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:06:05 by amarchan          #+#    #+#             */
/*   Updated: 2021/12/13 10:11:08 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	/*int 			i = 1;
	char			c = '0';
	const char		*s = "baudelaire";
	unsigned  int	u = 4294967295;
	const int		x = 789;
	int				X = 42;*/

	
//	ft_printf("moi: bla %d blabla %c blabla %s\n", i, c, s);
//	printf("lui: bla %d blabla %c blabla %s\n\n", i, c, s);

	//ft_printf(" %p ", -1);
	//printf("%d\n", ft_printf(" %p ", -1));
	//printf("\n");
	//printf(" %p ", -1);
	//printf("%d\n", printf(" %p ", -1));

	//ft_printf("moi: %01d\n", s);
	//printf("lui: %01dn\n", s);

	//ft_printf("moi: %01d\n", &x);
	//printf("lui: %01d\n\n", &x);

	//ft_printf("moi: %u\n", u);
	//printf("lui: %u\n\n", u);
	
	//ft_printf(" NULL %s NULL ", NULL);
	//ft_printf("moi: %p\n", s);
	//printf("lui: %p\n\n", s);

	//ft_printf("moi: %X\n", X);
	//printf("lui: %X\n\n", X);
	#include <limits.h>

	printf("%d", ft_printf("%32s", "abc"));
	printf("\n");
	printf("%d", printf("%32s", "abc"));
	
	return(0);
}
