/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 00:57:54 by asoler            #+#    #+#             */
/*   Updated: 2022/03/24 15:21:34 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	initializer(int table[], int roots[])
{
	int	index;

	index = 0;
	while (index < 11)
	{
		roots[index] = index;
		table[index] = index * index;
		index++;
	}
}

int	until_100(int nb)
{
	int	table[11];
	int	roots[11];
	int	i;

	initializer(table, roots);
	i = 0;
	while (i < 11)
	{
		if (nb != table[i])
			i++;
		else
			return (roots[i]);
	}
	return (0);
}

int	ft_sqrt(int nb)
{
	int	result;
	int	odd;
	int	index;

	if (nb < 100)
	{
		result = until_100(nb);
		return (result);
	}
	else
	{
		odd = 1;
		index = 0;
		while (nb > 0)
		{
			nb -= odd;
			odd += 2;
			index++;
		}
		if (nb < 0)
			return (0);
		else
			return (index);
	}
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_sqrt(441));
// Return 0 if negative numbers. R
}
