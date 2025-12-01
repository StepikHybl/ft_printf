#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *format, ...);

int ft_print_char(int c);
int ft_print_str(char *s);
int ft_print_ptr(void *p);
int ft_print_int(int n);
int ft_print_uint(unsigned int n);
int ft_print_hex(unsigned int n, char format);
int ft_print_percent(void);

void    ft_putnbr_base(unsigned long n, char *base, int *len);
int     ft_putchar_len(char c);
int     ft_putstr_len(char *s);

#endif