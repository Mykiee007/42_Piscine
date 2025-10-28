/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:18:58 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/14 17:00:48 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
int	main(void)
{
	int	numbers[] = { 2, 2, 3, 3, 5};
	int	size;
	int	i;

	size = 5;
	printf("before:");
	i = 0;
	while (i < size)
	{
		printf("%d ", numbers[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(numbers, size);
	printf("after:");
	i = 0;
	while (i < size)
	{
		printf("%d ", numbers[i]);
		i++;
	}
	return (0);
}*/
