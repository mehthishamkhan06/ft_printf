/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:58:47 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/30 15:07:25 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_hexaddr(unsigned long n);
int	ft_rnputnbr(int n);
int	ft_unsignint(unsigned int n);
int	ft_hexsm(unsigned int n);
int	ft_hexcap(unsigned int n);

#endif
