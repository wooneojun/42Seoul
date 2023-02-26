/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:20:17 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/22 09:20:50 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	checknum(int *num, int n, int i);

void	ft_print_combn(int n)
{
	int	num[11];
	int	j;

	j = -1;
	while (++j < n)
		num[j] = j;
	checknum(num, n, n - 1);
}

void	writenum(int *num, int n)
{
	int		i;
	char	k;

	i = -1;
	k = 0;
	while (++i < n)
	{
		k = num[i] + '0';
		write(1, &k, 1);
	}
	if (num[0] != 10 - n)
		write(1, ", ", 2);
}

void	checknum(int *num, int n, int i)
{
	while (1)
	{
		while (num[i] < 10)
		{
			writenum(num, n);
			num[i] += 1;
		}
		if (num[0] == 10 - n || n == 1)
			break ;
		while (num[i] >= 10 - n + i)
			i--;
		num[i] += 1;
		while (i < n - 1)
		{
			num[i + 1] = num[i] + 1;
			i++;
		}
	}
}
