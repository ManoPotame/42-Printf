/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizetlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 11:53:09 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/16 16:56:44 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

size_t	ft_sizetlen(size_t n)
{
	size_t	len_sizet;

	len_sizet = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		len_sizet++;
	}
	return (len_sizet);
}
