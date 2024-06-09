/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:00:06 by dconstan          #+#    #+#             */
/*   Updated: 2024/06/08 15:15:22 by dconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	mid(int x, int y)
{
	int	i;
	int	a;

	if (y > 1)
	{
		a = 0;
		while (a < (y - 2))
		{
			ft_putchar('\n');
			ft_putchar('|');
			i = 0;
			while (i < (x - 2))
			{
				ft_putchar(' ');
				++i;
			}
			if (x > 1)
				ft_putchar('|');
			++a;
		}
	}
}

void	end(int x, int y)
{
	int	a;

	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('o');
		a = 0;
		while (a < (x - 2))
		{
			ft_putchar('-');
			++a;
		}
		if (x > 1)
			ft_putchar('o');
	}
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	a;

	if (x > 0 && y > 0)
		ft_putchar('o');
	a = 0;
	while (a < (x - 2) && y > 0)
	{
		ft_putchar('-');
		++a;
	}
	if (x > 1 && y > 0)
		ft_putchar('o');
	mid(x, y);
	end(x, y);
}
