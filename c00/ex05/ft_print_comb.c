/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:51:14 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/06 09:51:20 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	combine(int a, int b, int c, int first)
{
	if (a < '8')
	{
		if (c <= '9')
		{
			if (first != 1)
			{
				write(1, ", ", 2);
			}
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			combine(a, b, c + 1, 0);
		}
		else if (b <= '8')
		{
			combine(a, b + 1, b + 2, 0);
		}
		else
		{
			combine(a + 1, a + 2, a + 3, 0);
		}
	}
}

void	print_comb(void)
{
	combine('0', '1', '2', 1);
}

// int	main(void)
// {
// 	print_comb();
// }
