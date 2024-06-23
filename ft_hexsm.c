#include "ft_printf.h"

int	ft_hexsm(unsigned int n)
{
    int	length;
	char *str;

	length = 0;
	str = "0123456789abcdef";
	if (n >= 16)
		length += ft_hexsm(n / 16);
	length += ft_rnputchar((n % 10) + 48);
	return (length);
}