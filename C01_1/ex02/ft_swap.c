/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:17:00 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/14 10:11:12 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 9;
	b = 7;
	printf("before, a is %d and b is %d\n", a, b);
	ft_swap(&a, &b);
	printf("after, a is %d and b is %d", a, b);
	return (0);
}
*/
