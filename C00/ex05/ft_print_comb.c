/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:43:27 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/21 14:13:12 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	one;
	char	ten;
	char	hunds;

	hunds = '0';
	while (hunds <= '7')
	{
		ten = hunds;
		while (++ten <= '8')
		{
			one = ten;
			while (++one <= '9')
			{
				write(1, &hunds, 1);
				write(1, &ten, 1);
				write(1, &one, 1);
				if (hunds != '7')
					write(1, ", ", 2);
			}
		}
		hunds++;
	}
}
