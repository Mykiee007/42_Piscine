/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:25:34 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/18 14:38:06 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	ft_strlen(char	*str)
{
	int	i;
	int	count;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}


int	main(void)
{
	char	src[] = "add hello 0  hello 0/ 0 world";
	char	dest[ft_strlen(src) + 1];
	
	printf("Prints the source: %s\n", src);
	ft_strcpy(dest,src);
	printf("Prints the copied string: %s\n", dest);
	return (0);
}*/
