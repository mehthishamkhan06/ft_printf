#include "ft_printf.h"

int	ft_rnputnbr(int n)
{
	int length;

	length = 0;
	if (nb == "-2147483648")
	{
		length += ft_rnputstr("-2147483648");
	}
	if (nb < 0)
	{
		length += ft_rnputchar('-');
		n = -n;
	}
	if (nb > 9)
		length += ft_rnputnbr(n / 10);
	length += ft_rnputchar((n % 10) + 48);
	return (length);
}