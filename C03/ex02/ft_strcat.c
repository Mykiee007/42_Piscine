/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:55:29 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/21 14:36:27 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d_size;

	d_size = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[d_size + i] = src[i];
		i++;
	}
	dest[d_size + i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char str1[10] = "Hello";
    char *str2;
    char *result1;

    str2 = "World";
    result1 = ft_strcat(str1, str2);
    printf("%s\n", result1);
    return (0);
}*/
