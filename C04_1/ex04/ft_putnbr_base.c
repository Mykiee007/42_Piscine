/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:52:53 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/28 13:23:28 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_base_check(char *base, int base_len)
{
	int	i;
	int	j;

	if (base_len < 2)
		return (0);
	i = 0;
	while (i < base_len)
	{
		if (base[i] == '-' || base[i] == '+'
			|| (base [i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	n;

	n = nbr;
	base_len = ft_strlen(base);
	if (!ft_base_check(base, base_len))
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	ft_putchar((base[n % base_len]));
}
/*
int main(void)
{
	ft_putnbr_base(42, "01");          // binary: 101010
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789");  // decimal: 42
	write(1, "\n", 1);
	ft_putnbr_base(-42, "0123456789ABCDEF"); // hex: 2A
	write(1, "\n", 1);
	ft_putnbr_base(-42, "poneyvif");   // octal-like: ...
	write(1, "\n", 1);
}*/
