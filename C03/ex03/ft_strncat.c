/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:29:16 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/21 11:14:13 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*stc, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb)
	{
		if (stc[j] != '\0')
			dest[i++] = stc[j++];
		else
			break ;
	}
	dest[i] = '\0';
	return (dest);
}
