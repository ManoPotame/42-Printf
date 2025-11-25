/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 09:34:09 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/25 14:12:48 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	print_nbr_base(unsigned long n, char *base)
{
	unsigned int	count;
	int				size_base;

	count = 0;
	size_base = ft_strlen(base);
	if (n >= (unsigned int)size_base)
		count += print_nbr_base((n / size_base), base);
	count += print_char(base[n % size_base]);
	return (count);
}
