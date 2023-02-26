/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:31:14 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/22 10:19:34 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z')
		{
			flag = 0;
			break ;
		}
		else if (str[i] < 'a' && str[i] > 'Z')
		{
			flag = 0;
			break ;
		}
		i++;
	}
	if (str[0] == '\0')
		flag = 1;
	return (flag);
}
