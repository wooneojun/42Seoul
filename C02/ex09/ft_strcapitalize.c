/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:07:05 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/22 10:18:43 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[++i] != '\0')
	{
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') \
				|| (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
		else if ((str[i] > 'Z' && str[i] < 'a') || str[i] > 'z' \
				|| (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}
