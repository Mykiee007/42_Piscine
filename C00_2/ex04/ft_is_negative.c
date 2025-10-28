/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:52:10 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/14 12:11:01 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
	{
	char	answer;

	if (n < 0)
	{
		answer = 'N';
		write(1, &answer, 1);
	}
	else
	{
		answer = 'P';
		write(1, &answer, 1);
	}
}

int	main(void)
{
	ft_is_negative(99);
	ft_is_negative(0);
	ft_is_negative(-99);
	return (0);
}

