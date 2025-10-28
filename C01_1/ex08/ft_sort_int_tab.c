/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:56:51 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/14 16:48:36 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	arr[] = {5, 2, 8, 3, 1,3,4,2,5,6,4,1};
	int	size;
	int	i;

	size = 18;
	ft_sort_int_tab(arr, size);
	i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}*/
