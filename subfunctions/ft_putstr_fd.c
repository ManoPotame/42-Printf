/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 09:33:57 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/14 16:39:49 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;
	int strlen = ft_strlen(s);

	i = 0;
	if (!s)
		return (strlen);
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return (strlen);
}
