/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siwpark <siwpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:37:04 by michang           #+#    #+#             */
/*   Updated: 2023/02/12 22:13:52 by michang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			rush(int width, int height);
int				error_check(int c, char **v);	
long long int	atolli(char *str);
int				check_other_char(char *str);

int	main(int argc, char *argv[])
{
	if (!error_check(argc, argv))
		rush((int)atolli(argv[1]), (int)atolli(argv[2]));
	return (0);
}

int	error_check(int c, char **v)
{
	int	error_code;

	error_code = 1;
	if (c == 1 || c == 2)
		write(1, "\n[*] usage : ./a.out [width] [height]\n\n", 39);
	else if (c > 3)
		write(1, "\n[*] too many arguments.\n\n", 26);
	else if (check_other_char(v[1]) || check_other_char(v[2]))
		write(1, "\n[*] wrong input.\n[*] only positive number.\n\n", 45);
	else if (atolli(v[1]) > 2147483647 || atolli(v[2]) > 2147483647)
	{
		write(1, "\n[*] Too big number.", 20);
		write(1, "\n[*] Please enter number within the integer range.\n\n", 52);
	}
	else
		error_code = 0;
	return (error_code);
}

long long int	atolli(char *str)
{
	int				i;
	long long int	result;

	i = 0;
	result = 0;
	while (*(str + i) != '\0')
	{
		result *= 10;
		result += *(str + i) - '0';
		i++;
	}
	return (result);
}

int	check_other_char(char *str)
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < '0' || *(str + i) > '9')
			flag = 1;
		i++;
	}
	return (flag);
}
