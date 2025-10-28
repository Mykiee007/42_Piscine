/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:06:09 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/16 15:23:53 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
Returns 1 if string contains only UPPERCASE ALPHA
Returns 1 if string is empty
Returns 0 if string coints OTHER CHARACTERS
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char	str[] = "THISISCORRECT";
	char	str2[] = "THIS IS NOT CORRECT";
	char	str3[] = {}; //empty
	char	str4[] = "this is not CORRECT";
	int d;

	printf("\nReturns 1 if string contains ONLY UPPERCASE ALPHA\n");
	printf("Returns 1 if string is EMPTY\n");
	printf("Returns 0 if OTHER CHARACTERS\n\n"); 


	d = ft_str_is_uppercase(str);
	printf("%s --> %d\n\n", str, d);
	d = ft_str_is_uppercase(str2);
	printf("%s --> %d\n\n", str2, d);
	d = ft_str_is_uppercase(str3);
	printf("%s --> %d\n\n", str3, d);
	d = ft_str_is_uppercase(str4);
	printf("%s --> %d\n\n", str4, d);
	return (0);
}*/
