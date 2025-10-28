/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:17:31 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/21 13:37:36 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	unsigned int	n;
	char			*str1;
	char			*str2;
	int				result1;
	int				result2;
	int				result3;

	str1 = "apple";
	str2 = "applee";
	n = 6;
	result1 = ft_strncmp(str1, str2, n);
	result2 = ft_strncmp(str2, str1, n);
	result3 = ft_strncmp(str1, str1, n);
	printf("%d\n", result1);
	printf("%d\n", result2);
	printf("%d\n", result3);
	return (0);
}*/
