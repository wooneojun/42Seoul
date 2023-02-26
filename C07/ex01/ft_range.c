/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:37:49 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/21 13:41:41 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

int	main()
{
	printf("%d", *ft_range(1, 9));
}
