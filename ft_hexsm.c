/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexsm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:58:32 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/30 15:27:03 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexsm(unsigned int n)
{
	int		length;
	char	*str;

	length = 0;
	str = "0123456789abcdef";
	if (n >= 16)
		length += ft_hexsm(n / 16);
	length += ft_putchar(str[n % 16]);
	return (length);
}
