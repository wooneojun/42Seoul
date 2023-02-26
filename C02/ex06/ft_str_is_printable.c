/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:04:57 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/21 10:49:02 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	flag;

	i = -1;
	flag = 1;
	while (str[++i] != '\0')
		if (str[i] < '!' || str[i] > '~')
			flag = 0;
	return (flag);
}
