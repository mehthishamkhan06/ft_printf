/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexcap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:58:23 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/30 15:17:42 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexcap(unsigned int n)
{
	int		length;
	char	*str;

	length = 0;
	str = "0123456789ABCDEF";
	if (n >= 16)
		length += ft_hexcap(n / 16);
	length += ft_putchar(str[n % 16]);
	return (length);
}
