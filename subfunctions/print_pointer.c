/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:52:54 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/25 14:08:37 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	print_pointer(void *ptr)
{
	size_t	ulong_ptr;
	int		len_ulong;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ulong_ptr = (size_t)ptr;
	print_str("0x");
	len_ulong = print_nbr_base((unsigned long)ptr, "0123456789abcdef");
	return (len_ulong + 2);
}
