/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:16:25 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/21 15:11:22 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb <= 0)
		return (0);
	fact = 1;
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
