/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:04:01 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/14 10:16:25 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 1234;
	b = 222;
	printf("A: %d. B: %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("Quotient %d\n", div);
	printf("Reminder %d", mod);
	return (0);
}*/
