// #include "ft_printf.h"
#include <unistd.h>
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		str = "(NULL)";
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
