/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:08:24 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/14 10:16:56 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int ft_intlen(int n)
{
	int	len_int;

	len_int = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len_int++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		len_int++;
	}
	return (len_int);
}
