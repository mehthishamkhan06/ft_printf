// #include "ft_printf.h"
#include <unistd.h>

int	ft_rnputchar(int c)
{
	write(1, &c, 1);
	return (1);
}