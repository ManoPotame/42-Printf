/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 09:34:09 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/16 17:10:32 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	print_nbr_base(unsigned long n, char *base)
{
	unsigned int	count;

	count = 0;
	if (n >= (unsigned int)ft_strlen(base))
		count += print_nbr_base((n / ft_strlen(base)), base);
	count += print_char(base[n % ft_strlen(base)]);
	return (count);
}
