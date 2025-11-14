/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 09:34:09 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/14 17:10:04 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_putnbrbase_fd(size_t n, char *base)
{
	if (n >= ft_strlen(base))
		ft_putnbrbase_fd((n / ft_strlen(base)), base);
	ft_putchar_fd(base[n % ft_strlen(base)], 1);

}
