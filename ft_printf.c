/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:09:20 by mkhan             #+#    #+#             */
/*   Updated: 2022/05/19 16:51:02 by mkhan            ###   ########.fr       */
=======
/*   By: mohkhan <mohkhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:14:46 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/30 16:13:35 by mohkhan          ###   ########.fr       */
>>>>>>> 4823e1fa0a149f9815b355ed099a5eb003fb49a7
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkformat(char c, va_list lst)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(lst, int));
	else if (c == 's')
		len += ft_putstr(va_arg(lst, char *));
	else if (c == 'p')
		len += ft_hexaddr(va_arg(lst, unsigned long));
	else if (c == 'd' || c == 'i')
<<<<<<< HEAD
		len += ft_intdec(va_arg(lst, int));
	else if (c == 'u')
		len += ft_unint(va_arg(lst, unsigned int));
	else if (c == 'x')
		len += ft_hexalow(va_arg(lst, unsigned int));
	else if (c == 'X')
		len += ft_hexacap(va_arg(lst, unsigned int));
=======
		len += ft_rnputnbr(va_arg(lst, int));
	else if (c == 'u')
		len += ft_unsignint(va_arg(lst, unsigned int));
	else if (c == 'x')
		len += ft_hexsm(va_arg(lst, unsigned int));
	else if (c == 'X')
		len += ft_hexcap(va_arg(lst, unsigned int));
>>>>>>> 4823e1fa0a149f9815b355ed099a5eb003fb49a7
	else if (c == '%')
		len += ft_putchar(c);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	lst;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(lst, str);
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_checkformat(str[++i], lst);
<<<<<<< HEAD
            if (len == -1)
                return (-1);
		else
			len += ft_putchar(str[i]);
            if (len == -1)
                return (-1);
        i++;
	}
	va_end(lst);
	return (len);
}
=======
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(lst);
	return (len);
}

int main()
{
//     ft_printf("\001\002\007\v\010\f\r\n");
    printf("\n%d", printf("\001\002\007\v\010\f\r\n"));
}
>>>>>>> 4823e1fa0a149f9815b355ed099a5eb003fb49a7
