/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:49:54 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/16 13:02:29 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	char str[] = "1234123";
	char str2[] = "abcdefghijklmnopqrstuvwxyz";
	char str3[] = "numberattheBack1";
	char str4[] = "capsatthebacK";
	char str5[] = "spaceattheback ";
	char str6[] = "thisshouldbecorrect";
	int d;

	printf("\nReturns '1' if string has only LOWERCASE ALPHA CHAR\n\n");
	printf("Returns '0' if ANY OTHER CHARACTERS\n\n");
	d = ft_str_is_lowercase(str);
	printf("%s -> %d\n\n", str, d);
	d = ft_str_is_lowercase(str2);
	printf("%s -> %d\n\n", str2, d);
	d = ft_str_is_lowercase(str3);
	printf("%s -> %d\n\n", str3, d);
	d = ft_str_is_lowercase(str4);
	printf("%s -> %d\n\n", str4, d);
	d = ft_str_is_lowercase(str5);
	printf("%s -> %d\n\n", str5, d);
	d = ft_str_is_lowercase(str6);
	printf("%s -> %d\n\n", str6, d);
	return (0);
}*/
