/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:54:43 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/21 11:01:17 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = -1;
	if (src[0] == '\0' && size != 0)
		*dest = '\0';
	while (src[++i] != '\0')
	{
		if (size > 0 && i < size - 1)
			*(dest + i) = *(src + i);
		else if (i == size - 1)
			*(dest + i) = '\0';
		else if (src[i + 1] == '\0')
			*(dest + i + 1) = '\0';
	}
	return (i);
}
