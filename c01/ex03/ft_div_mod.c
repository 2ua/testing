/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:01:23 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/05 13:01:26 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		remainder;
	int		division;

	division = a / b;
	remainder = a - b * division;
	*div = division;
	*mod = remainder;
}

int	main(void)
{
	int		num1;
	int		num2;
	int		*divi;
	int		*modu;

	num1 = 10;
	num2 = 6;
	divi = &num1;
	modu = &num2;
	ft_div_mod(num1, num2, divi, modu);
	write(1, divi, 1);
}
