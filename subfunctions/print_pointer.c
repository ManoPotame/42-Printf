/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:52:54 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/16 17:10:14 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	print_pointer(void *ptr)
{
	size_t	ulongptr;
	int		lenulong;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ulongptr = (size_t)ptr;
	print_str("0x");
	lenulong = print_nbr_base((unsigned long)ptr, "0123456789abcdef");
	return (lenulong + 2);
}
