/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:12:41 by asoler            #+#    #+#             */
/*   Updated: 2022/03/23 20:14:26 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

#include <stdio.h>
int	main()
{
	int a;
	int b;

	a = 13;
	b = 45;
	ft_swap(&a, &b);
	printf("a was 13 now is %d\nb was 45 now is %d\n", a, b);
}

