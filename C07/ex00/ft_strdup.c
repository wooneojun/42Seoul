/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:12:22 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/21 12:45:39 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *stc)
{
	int	i;

	i = 0;
	while (stc[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *stc)
{
	char	*a;
	int		i;

	i = 0;
	a = (char *)malloc((ft_strlen(stc) + 1) * sizeof(int));
	while (*stc)
	{
		*(a++) = *(stc++);
		i++;
	}
	a = a - i;
	return (a);
}
