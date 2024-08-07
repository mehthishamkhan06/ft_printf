/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:08:46 by mohkhan           #+#    #+#             */
/*   Updated: 2024/07/10 15:46:54 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadec(unsigned long n)
{
	int		length;
	char	*str;

	str = "0123456789abcdef";
	length = 0;
	if (n > 15)
		length += ft_hexadec(n / 16);
	length += ft_putchar(str[n % 16]);
	return (length);
}

int	ft_hexaddr(unsigned long n)
{
	int	length;

	length = ft_putstr("0x");
	if (n == 0)
		length += ft_putchar('0');
	else
		length += ft_hexadec(n);
	return (length);
}
