/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:07:52 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/22 15:08:27 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int c, char **v)
{
	int	i;
	int	j;

	i = 1;
	while (c - i != 0)
	{
		j = 0;
		while (v[c - i][j] != '\0')
		{
			ft_putchar(v[c - i][j]);
			j++;
		}
		ft_putchar('\0');
		i++;
	}
	return (0);
}
