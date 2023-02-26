/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:37:32 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/18 18:08:15 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == 32 || c == '\n' || c == '\t' || c == '\v' || c == '\f')
		return (1);
	else if (c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	c;
	int	final;

	i = 0;
	c = 1;
	final = 0;
	while (ft_isspace(str[i]) != 0)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		final *= 10;
		final += str[i] - '0';
		i++;
	}
	return (c * final);
}
