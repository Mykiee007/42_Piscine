/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:06:02 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/22 12:04:47 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[] = "my world is nanana";
	char find[] = "world";
	char str2[] = "ld";
	char *result1;

	result1 = ft_strstr(str1, find);
	printf("%s\n", result1);
	printf("%s\n", ft_strstr(str1, str2));
	return (0);
}*/
