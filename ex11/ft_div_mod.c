/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:19:40 by asoler            #+#    #+#             */
/*   Updated: 2022/03/23 20:22:16 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int	main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 45;
	b = 13;
	ft_div_mod(a, b, &div, &mod);
	printf("a/b =  %d\n module a b =  %d\n", div, mod);
}


