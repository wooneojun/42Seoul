/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:02:49 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/21 10:48:10 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	flag;

	i = -1;
	flag = 1;
	while (str[++i] != '\0')
		if (str[i] < 'A' || str[i] > 'Z')
			flag = 0;
	return (flag);
}
