/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michang <michang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:43:03 by michang           #+#    #+#             */
/*   Updated: 2023/02/12 17:32:10 by michang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);	

void	ft_print_line(char *symbols, int width)
{
	int	x;

	x = 0;
	while (x < width)
	{
		if (x == 0)
			ft_putchar(symbols[0]);
		else if (x == width - 1)
			ft_putchar(symbols[2]);
		else
			ft_putchar(symbols[1]);
		x++;
	}
	ft_putchar('\n');
}

void	rush(int width, int height)
{
	int		y;

	y = 0;
	while (y < height)
	{
		if (y == 0)
			ft_print_line("o-o", width);
		else if (y < height - 1)
			ft_print_line("| |", width);
		else
			ft_print_line("o-o", width);
		y++;
	}
}
