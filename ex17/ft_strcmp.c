/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:32:21 by asoler            #+#    #+#             */
/*   Updated: 2022/03/24 16:55:06 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			result = *s1 - *s2;
			return (result);
		}
		s1++;
		s2++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char str[] = "these string is the no ch";
	char str2[] = "these string is the one";
	// char str2[] = "these string change from now on";
	

	printf("Original Funtion: %d\n", strcmp(str, str2));
	printf("Ft Funtion: %d\n", ft_strcmp(str, str2));
}