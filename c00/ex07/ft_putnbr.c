/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 09:40:50 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/05 09:40:52 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	str[10];
	int		i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (nb / 10)
	{
		str[i++] = nb % 10 + '0';
		nb = nb / 10;
	}
	str[i] = nb % 10 + '0';
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

// int	main(void)
// {
// 	ft_putnbr(1000);
// 	ft_putnbr(-50);
// 	ft_putnbr(81);
// }
