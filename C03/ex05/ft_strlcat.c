/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:03:39 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/22 15:02:59 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < size - 1)
	{
		if (src[j] != '\0')
			dest[i++] = src[j++];
		else
			break ;
	}
	dest[i] = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (ft_strlen(dest) + 1 > size)
		i = ft_strlen(src) + size;
	else
	{
		i = ft_strlen(dest) + ft_strlen(src);
		ft_strncat(dest, src, size - ft_strlen(dest));
	}
	return (i);
}
