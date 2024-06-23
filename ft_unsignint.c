#include "ft_printf.h"

int	ft_unsignint(unsigned int n)
{
	int length;

	length = 0;
	if (n >= 10)
		length += ft_unsignint(n / 10);
	length += ft_rnputchar((n % 10) + 48);
	return (length);
}