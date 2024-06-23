#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_rnputchar(int c);
int	ft_rnputstr(char *str);
int	ft_hexaddr(unsigned long n);
int	ft_rnputnbr(int n);
int	ft_unsignint(unsigned int n);
int	ft_hexsm(unsigned int n);
int	ft_hexcap(unsigned int n);

#endif