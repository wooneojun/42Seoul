/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:02:48 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/22 12:52:07 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_ten_queens_puzzle(void);
void	recur(int queens, int *cnt, int *place);
void	ft_print_queens(int *place, int *cnt);

void	ft_print_queens(int *place, int *cnt)
{
	int	i;

	i = -1;
	cnt[0] += 1;
	while (++i < 10)
		write(1, &"0123456789"[place[i]], 1);
	write(1, "\n", 1);
	return ;
}

void	recur(int queens, int *cnt, int *place)
{
	int	flag;
	int	go;
	int	prv;

	if (queens == 10)
	{
		ft_print_queens(place, cnt);
		return ;
	}
	go = -1;
	while (++go < 10)
	{
		flag = 1;
		prv = -1;
		while (++prv < queens)
			if (go == place[prv] || prv - queens == place[prv] - go
					|| prv - queens == go - place[prv])
				flag = 0;
		if (flag)
		{
			place[queens] = go;
			recur(queens + 1, cnt, place);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	place[11];
	int	i;
	int	cnt[1];

	i = -1;
	cnt[0] = 0;
	while (++i < 10)
		place[i] = 0;
	recur(0, cnt, place);
	return (cnt[0]);
}

int main()
{
	printf("%d", ft_ten_queens_puzzle());
}
