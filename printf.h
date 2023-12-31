#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>

int	ft_lhex(unsigned long d);
int	ft_uhex(unsigned long d);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(char s);
int	ft_unsigned(size_t n);
int	ft_printf(const char *str, ...);
int	ft_params(char str, int i, va_list args);

#endif
