/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:34:13 by asoler            #+#    #+#             */
/*   Updated: 2022/03/24 15:55:28 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char *str = "these string has 25 chars";

	printf("Original Funtion: %ld\n", strlen(str));
	printf("Ft Funtion: %d\n", ft_strlen(str));
}
