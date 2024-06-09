/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:01:47 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/05 15:01:50 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	
	c = *a;

	*a = *a / *b;
	*b = c - *b / *a;
}

int main()
{
	int a;
	int b;
	int *ptr1;
	int *ptr2;

	a = 23;
	b = 4;
	ptr1 = &a;
	ptr2 = &b;
	ft_ultimate_div_mod(ptr1,ptr2);

	write(1, *ptr1, 1);
	write(1, *ptr2, 1);
}