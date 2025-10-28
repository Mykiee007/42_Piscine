/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:06:54 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/17 12:59:56 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
Converts every letter to uppercase
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "all lower case";
	char str2[] = "hello - wrold";

	printf("\nconverts every letter to UPPERCASE\n\n");
	printf("Before: %s\n", str);
	ft_strupcase(str);
	printf("After: %s\n\n", str);
	printf("Before: %s\n", str2);
	ft_strupcase(str2);
	printf("After: %s\n", str2);
	return (0);
}*/
