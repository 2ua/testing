/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:56:57 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/06 09:57:15 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_answer(char split[5], int i, int j)
{
	split[0] = '0' + i / 10;
	split[1] = '0' + i % 10;
	split[2] = ' ';
	split[3] = '0' + j / 10;
	split[4] = '0' + j % 10;
	write(1, split, 5);
}

void	ft_print_comb2(void)
{
	char	split[5];
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_answer(split, i, j);
			if (i == 98 && j == 99)
			{
				return ;
			}
			write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// }
