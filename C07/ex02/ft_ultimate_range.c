/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:59:45 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/21 13:22:52 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	chk;

	chk = 0;
	if (min > max)
		return (0);
	i = (int *)malloc(sizeof(int) * (max - min + 1));
	while (min < max)
	{
		*(i++) = min++;
		chk++;
	}
	return (i - chk);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	ft_range(range, min, max);
	
