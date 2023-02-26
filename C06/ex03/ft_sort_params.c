/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjunch <wonjunch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:30:09 by wonjunch          #+#    #+#             */
/*   Updated: 2023/02/22 20:17:27 by wonjunch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	flag;

	i = -1;
	flag = 0;
	while (*(s1 + ++i))
		if (*(s1 + i) != *(s2 + i))
		{
			flag = *(s1 + i) - *(s2 + i);
			break ;
		}
	if (flag == 0 && *(s2 + i) != '\0')
		flag = -1 * *(s2 + i);
	return (flag);
}

void	ft_sortorder(int c, char **v)
{
	char	*tmp;
	int		i;
	int		j;

	i = -1;
	tmp = 0;
	while (++i < c - 2)
	{
		j = -1;
		while (++j < c - 2)
		{
			if (ft_strcmp(*(v + j), *(v + j + 1)) > 0)
			{
				tmp = *(v + j);
				*(v + j) = *(v + j + 1);
				*(v + j + 1) = tmp;
			}
		}
	}
}

int main(int argc, char **argv)
{
	int	i;
	int j;

	i = 0;
	ft_sortorder(argc, argv);
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			write(1, &argv[i][j], 1);
		write(1, "\n", 1);
	}
}
