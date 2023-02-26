/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:10:21 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/21 11:23:20 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_checksame(char *str)
{
	int	i;
	int	flag;
	int	j;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				flag = 0;
			j++;
		}
		i++;
	}
	return (flag);
}

int	ft_checksign(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			flag = 0;
		i++;
	}
	return (flag);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_strlen(base) > 1 && ft_checksign(base) && ft_checksame(base))
	{
		if (nbr == -2147483648)
		{
			write(1, "-", 1);
			ft_putnbr_base(nbr / ft_strlen(base) * -1, base);
			write(1, &base[nbr % ft_strlen(base) * -1], 1);
		}
		else if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = nbr * -1;
			ft_putnbr_base(nbr, base);
		}
		else if (nbr >= ft_strlen(base))
		{
			ft_putnbr_base(nbr / ft_strlen(base), base);
			write(1, &base[nbr % ft_strlen(base)], 1);
		}
		else
			write(1, &base[nbr], 1);
	}
}
