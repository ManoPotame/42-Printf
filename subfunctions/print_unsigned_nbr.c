/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:01:24 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/16 14:05:37 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	print_unsigned_nbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += print_unsigned_nbr(n / 10);
	count += print_char(n % 10 + '0');
	return (count);
}
