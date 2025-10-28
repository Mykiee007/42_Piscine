/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:31:01 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/16 12:47:28 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	char str[] = "0123456789";
	char str2[] = "no numbers";
	char str3[] = "123 456 789";
	int d;

	printf("\nReturns '1' if string has ONLY DIGITS\n");
	printf("Returns '0' if ANY OTHER characters\n\n");
	d = ft_str_is_numeric(str);
	printf("%s -> %d\n\n", str, d);
	d = ft_str_is_numeric(str2);
	printf("%s -> %d\n\n", str2, d);
	d = ft_str_is_numeric(str3);
	printf("%s -> %d\n\n", str3, d);
	return (0);
}*/
