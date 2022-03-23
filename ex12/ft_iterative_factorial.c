/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:25:19 by asoler            #+#    #+#             */
/*   Updated: 2022/03/23 21:04:13 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	index;
	long result;

	if (nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		index = nb;
		result = nb;
		while (index > 1)
		{
			result *= index - 1;
			index--;
		}
	}
	if(result > 2147483647)
		return	(0);
	else
		return (result);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_factorial(13));
}
