/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:44:08 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/23 15:51:41 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
Reproduce the behavior of the function strlcpy (man strlcpy);
strlcpy, this function copies the source and returns the src length without "\0"
strlcpy, returns the full length for programers to detect truncations. 
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int main(void)
{
	char str[] = "hello world";
	char str2[] = "hello world    ";
	char dest[ft_strlen(str) + 1];
	char dest2[ft_strlen(str2) + 2];
	int size;
	int c;

	size = 4;
	c = ft_strlcpy(dest, str, size);
	printf("source:'%s' | destination:'%s' | r_size: '%d'\n", str, dest, c);
	size = 20;
	c = ft_strlcpy(dest, str, size);
	printf("source:'%s' | destination:'%s' | r_size: '%d'\n", str, dest, c);
	size = 5;
	c = ft_strlcpy(dest2, str2, size);
	printf("source:'%s' | destination:'%s' | r_size:'%d'\n", str2, dest2, c);
	return (0);
}*/
