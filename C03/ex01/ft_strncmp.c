/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:44:26 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/22 14:54:19 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;
	int				flag;

	i = 0;
	flag = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			flag = s1[i] - s2[i];
			break ;
		}
		else if (s1[i] == '\0' && s2[i] == '\0')
		{
			flag = 0;
			break ;
		}
		i++;
	}
	return (flag);
}
