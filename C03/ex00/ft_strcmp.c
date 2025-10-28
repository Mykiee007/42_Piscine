/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:39:52 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/21 13:14:24 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	char *str1;
	char *str2;
	char result1;
	char result2;
	char result3;
	
	str1 = "";
	str2 = "a";

	result1 = strcmp(str1, str2);
	result2 = strcmp(str2, str1);
	result3 = strcmp(str1, str1);
	printf("%d\n", result1);
	printf("%d\n", result2);
	printf("%d\n", result3);
	printf("\n");

	result1 = ft_strcmp(str1, str2);
	result2 = ft_strcmp(str2, str1);
	result3 = ft_strcmp(str1, str1);
	printf("%d\n", result1);
	printf("%d\n", result2);
	printf("%d\n", result3);
	printf("\n");
	return (0);
}*/
