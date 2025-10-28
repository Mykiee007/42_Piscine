/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:10:11 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/23 10:41:22 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	dstlen;
	unsigned int	i;

	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	dstlen = 0;
	while (dest[dstlen] != '\0')
		dstlen++;
	if (size <= dstlen)
		return (size + srclen);
	i = 0;
	while (dstlen + i < size - 1 && src[i] != '\0')
	{
		dest[dstlen + i] = src[i];
		i++;
	}
	dest[dstlen + i] = '\0';
	return (dstlen + srclen);
}

#include <stdio.h>

int main(void)
{
	char	str1[20] = "Hello";
	char	str2[] = "World";
	unsigned	n;

	n = 3;
	printf("%u\n", ft_strlcat(str1, str2, n));
	printf("%s\n", str1);
	return (0);
}
