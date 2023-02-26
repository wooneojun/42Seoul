/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:36:31 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/22 15:00:36 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	j;

	i = -1;
	if (*to_find == '\0')
		return (str);
	while (str[++i] != '\0')
	{
		if (str[i] == *to_find)
		{
			j = 0;
			while (*(to_find + ++j) != '\0')
				if (str[i + j] != to_find[j])
					break ;
			if (to_find[j] == '\0')
				return (str + i);
		}
	}
	return ('\0');
}
