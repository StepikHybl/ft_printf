#include "ft_printf.h"

int ft_putchar_len(char c)
{
    write(1, &c, 1);
    return (1);
}

int ft_putstr_len(char *s)
{
    int len = 0;
    while (s && *s)
        len += ft_putchar_len(*s++);
    return (len);
}

void ft_putnbr_base(unsigned long n, char *base, int *len)
{
    unsigned long b = 0;
    
    while (base[b])
        b++;
    
    if (n >= b)
        ft_putnbr_base(n / b, base, len);
    write(1, &base[n % b], 1);
    (*len)++;
}