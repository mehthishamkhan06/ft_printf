#include "ft_printf.h"

int	ft_hexcap(unsigned int n)
{
    int	length;
	char *str;

	length = 0;
	str = "0123456789ABCDEF";
	if (n >= 16)
		length += ft_hexcap(n / 16);
	length += ft_rnputchar(s[n % 16]);
	return (length);
}