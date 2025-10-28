/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:29:58 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/14 12:17:00 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
	{
	write(1, &c, 1);
}

void	ft_put_two_digits(int n)
{
	char	tens;
	char	ones;

	tens = (char)((n / 10) + '0');
	ones = (char)((n % 10) + '0');
	ft_putchar(tens);
	ft_putchar(ones);
}

void	ft_print_comb2(void)
	{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put_two_digits(a);
			ft_putchar(' ');
			ft_put_two_digits(b);
			if (!(a == 98 && b == 99))
			{
				write(1, " ,", 2);
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
