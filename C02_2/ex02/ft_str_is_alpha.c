/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:35:27 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/16 12:26:36 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('A' <= str[i]) && (str[i] <= 'Z'))
			i++;
		else if (('a' <= str[i]) && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	char str[] = "helloworld";
	char str2[] = "ihaveANumber123";
	char str3[] = "lalala1alala";
	char str4[] = "i have a space";	
	char str5[] = "iHaveASpecialChar*&^&^$";
	int d;

	printf("\nprint '1' if string has only alphabetical characters\n");
	printf("print '0' if string has other characters\n\n");
	d = ft_str_is_alpha(str);
	printf("%s --> %d\n\n", str, d);
	d = ft_str_is_alpha(str2);
	printf("%s --> %d\n\n", str2, d);
	d = ft_str_is_alpha(str3);
	printf("%s --> %d\n\n", str3, d);
	d = ft_str_is_alpha(str4);
	printf("%s --> %d\n\n", str4, d);
	d = ft_str_is_alpha(str5);
	printf("%s --> %d\n\n", str5, d);
	return (0);
}*/
