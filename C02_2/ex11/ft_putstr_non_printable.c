/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:05:04 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/23 15:51:58 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_printable(char c)
{
	return (c > 31 && c < 127);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	char			*hex;
	int				i;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_printable(str[i]))
		{
			c = (unsigned char)str[i];
			ft_putchar('\\');
			ft_putchar(hex[c / 16]);
			ft_putchar(hex[c % 16]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int main(void)
{
	char str[] = "Hello\nWorld";
	char str2[] = "Hel£lo\fWorld";
	char str3[] = "Hello\tWorld";

	printf("changes non printable characters to hexadecimal\n\n");
	ft_putstr_non_printable(str);
	ft_putstr_non_printable(str2);
	ft_putstr_non_printable(str3);
	return (0);
}
