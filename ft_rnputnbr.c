/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rnputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:10:18 by mohkhan           #+#    #+#             */
/*   Updated: 2024/07/10 15:46:06 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_rnputnbr(int n)
{
	int	length;

	length = 0;
	if (n == -2147483648)
	{
		length += ft_putstr("-2147483648");
		return (length);
	}
	if (n < 0)
	{
		length += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		length += ft_rnputnbr(n / 10);
	length += ft_putchar((n % 10) + '0');
	return (length);
}
