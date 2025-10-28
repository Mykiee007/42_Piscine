/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:11:44 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/15 14:38:39 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	x;

	x = *a;
	*a = x / *b;
	*b = x % *b;
}

int	main(void)
{
	int a;
	int b;
	
	a = 10;
	b = 7;
	printf("first number is %d\n", a);
	printf("second number is %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("quotient: %d\n", a);
	printf("remainder: %d\n", b);
	return (0);
}
