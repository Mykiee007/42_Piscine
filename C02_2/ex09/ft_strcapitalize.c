/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:47:42 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/17 13:02:50 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
Conditions for Uppercase conversion
Followed by a special character

Conditions for lowercase conversion
Followed by a letter
Followed by a number
*/

char	ft_to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 'a' - 'A');
	return (c);
}

char	ft_to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 'a' - 'A');
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	prev_char;

	prev_char = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 96 && str[i] < 123) || (str[i] > 64 && str[i] < 91))
		{
			if (!prev_char)
				str[i] = ft_to_upper(str[i]);
			else
				str[i] = ft_to_lower(str[i]);
			prev_char = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			prev_char = 1;
		else
			prev_char = 0;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "hello world";
	char str2[] = " +0nice to meat you";
	char str3[] = "neVeR+giVe0up";
	
	printf("Capitalize the first letter of each word\n");
	printf("converts all other letters to lowercase\n\n");

	printf("Before: %s\n", str);
	ft_strcapitalize(str);
	printf("After: %s\n\n", str);
	printf("Before: %s\n", str2);
	ft_strcapitalize(str2);
	printf("After: %s\n\n", str2);
	printf("Before: %s\n", str3);
	ft_strcapitalize(str3);
	printf("After: %s\n\n", str3);
	return (0);
}*/
