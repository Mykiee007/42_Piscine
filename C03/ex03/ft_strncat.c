/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:39:16 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/21 15:02:06 by mvelasqu         ###   ########.fr       */
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
		size++;
	return (size);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d_size;

	i = 0;
	d_size = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
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
	char str1[28] = "Apple";
	char *str2;
	char *result1;
	unsigned int i;

	i = 2;
	str2 = "Pen";
	result1 = ft_strncat(str1, str2, i);
	printf("%s\n", result1);
	return (0);
}*/
