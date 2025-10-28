/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:01:10 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/27 15:50:48 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_len(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_check_base(char *base)
{
	int base_l;
	int i;

	base_l = ft_len(base);
	if (base_l < 2)
		return (0);

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] >= 9 && base[i] <= 13 || base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (base[j] != '\0')
		{
			if (base[i + j] == base[j])
				return (0);
			j++;
		}

		i++;
	}
}

int ft_atoi(char *str)
{
	int	i;
	int j;

	i = 0;
	while (str[i] == '-' || str[i] == '\t')
		i++;
	while (str[i] == '0' && str[i+1] == '0')
		i++;
	if (str[i] == '0' && (str[i+1] >= '1' && str[i + 1] <= '9'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
			str2[j] = str[i];
			j++;
			i++;
	}
	
}

int ft_atoi_base(char *str, char *base)
{
	if (!(ft_check_base(base) && ft_check_str(str)))
		return (0);
	

}
