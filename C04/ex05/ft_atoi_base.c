/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:50:46 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/18 18:07:15 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == 32 || c == '\n' || c == '\t' || c == '\f')
		return (1);
	else if (c == '\r')
		return (1);
	else
		return (0);
}

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
		if (str[i] == '-' || str[i] == '+' || str[i] == ' ')
			flag = 0;
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

int	ft_btoi(char c, char *base)
{
	int	i;

	i = 0;
	while (c != base[i] && base[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	s;
	int	final;

	i = 0;
	s = 1;
	final = 0;
	if (ft_strlen(base) > 1 && ft_checksame(base))
	{
		while (ft_isspace(str[i]) != 0)
			i++;
		while (str[i] == '-' || str[i] == '+')
			if (str[i++] == '-')
				s *= -1;
		while (str[i] != '\0')
		{
			if (ft_btoi(str[i], base) == ft_strlen(base))
				break ;
			final *= ft_strlen(base);
			final += ft_btoi(str[i++], base);
		}
	}
	return (final * s);
}
