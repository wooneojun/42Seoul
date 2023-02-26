/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:47:27 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/21 10:47:16 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	flag;

	i = -1;
	flag = 1;
	while (str[++i] != '\0')
		if (str[i] < 'a' || str[i] > 'z')
			flag = 0;
	return (flag);
}
