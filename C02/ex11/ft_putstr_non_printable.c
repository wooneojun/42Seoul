/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:03:21 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/22 10:58:08 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	*chr;

	chr = (unsigned char *)str;
	i = -1;
	while (chr[++i] != '\0')
	{
		if (chr[i] >= 32 && chr[i] <= 126)
		{
			write(1, &chr[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[chr[i] / 16], 1);
			write(1, &"0123456789abcdef"[chr[i] % 16], 1);
		}
	}
}
