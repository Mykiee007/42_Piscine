/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:52:53 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/27 14:55:16 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_base_check(char *base, int base_len)
{
	int i;
	int j;
	
	if (base_len < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = 0;
		while(base[j] != '\0')
		{
			if (base[i + j] == base[j])
				return (0);
			j++;
		}
		i++; 
	}
	return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
	int base_len;
	int i;

	base_len = ft_strlen(base);
	ft_base_check(base, base_len);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	ft_putchar(nbr % base_len + '0');
}

int main(void)
{
	int nbr;
	char base[] = "01";

	nbr = -10;
	ft_putnbr_base(nbr, base);
	return (0);
}
