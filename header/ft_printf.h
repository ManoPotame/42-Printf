/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 09:22:42 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/16 17:19:16 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);

int		ft_intlen(int n);
int		ft_strlen(char *str);
size_t	ft_sizetlen(size_t n);

int		print_char(char c);
int		print_str(char *s);
int		print_nbr(int n);
int		print_nbr_base(unsigned long n, char *base);
int		print_unsigned_nbr(unsigned int n);
int		print_pointer(void *ptr);

#endif
