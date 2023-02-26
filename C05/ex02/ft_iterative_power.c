/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:56:32 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/21 11:38:36 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		i = 0;
	else if (power == 0)
		continue ;
	else
	{
		while (power != 0)
		{
			i *= nb;
			power--;
		}
	}
	return (i);
}
