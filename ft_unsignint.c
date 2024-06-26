/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:00:19 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/30 15:18:20 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsignint(unsigned int n)
{
	int	length;

	length = 0;
	if (n >= 10)
		length += ft_unsignint(n / 10);
	length += ft_putchar((n % 10) + 48);
	return (length);
}
