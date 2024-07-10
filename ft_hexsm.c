/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexsm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:09:12 by mohkhan           #+#    #+#             */
/*   Updated: 2024/07/10 15:46:25 by mohkhan          ###   ########.fr       */
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
