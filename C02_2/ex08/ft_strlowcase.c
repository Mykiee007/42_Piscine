/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:30:09 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/17 12:42:34 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 'a' - 'A';
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "should convert to LOWERCASE";
	char str2[] = "mix SOME with 2213 NuMbEr";
	char str3[] = "*(*123Start With SPECIAL";

	printf("\nConverts every letter to lowercase\n\n");
	printf("Before: %s\n", str);
	ft_strlowcase(str);
	printf("After: %s\n\n", str);
	printf("Before: %s\n", str2);
	ft_strlowcase(str2);
	printf("After: %s\n\n", str2);
	printf("Before: %s\n", str3);
	ft_strlowcase(str3);
	printf("After: %s\n\n", str3);
	return (0);
}
*/
