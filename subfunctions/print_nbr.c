/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 09:34:01 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/15 11:26:50 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	print_nbr(int n)
{
	const int	lenint = ft_intlen(n);

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (lenint);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		print_nbr(n / 10);
		print_nbr(n % 10);
	}
	if (n <= 9)
	{
		print_char(n + '0');
	}
	return (lenint);
}
