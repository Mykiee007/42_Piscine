/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:36:01 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/17 12:42:00 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
Returns 1 if string contains ONLY PRINTABLE CHARACTERS
Returns 0 if string contains OTHER CHARACERS
Returns 1 if string is EMPTY
*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= ' ' && str[i] <= '~'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	char	str[] = "all printable characters *%&*%";
	char	str2[] = "hello";
	char	str3[] = "hello <inserted new line> \n";
	char	str4[] = "";
	int	d;

	d = ft_str_is_printable(str);
	printf("%s --> %d\n\n", str, d);
	d = ft_str_is_printable(str2);
	printf("%s --> %d\n\n", str2, d);
	d = ft_str_is_printable(str3);
	printf("%s --> %d\n\n", str3, d);
	d = ft_str_is_printable(str4);
	printf("%s --> %d\n\n", str4, d);
	return (0);
}*/
