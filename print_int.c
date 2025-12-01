#include "ft_printf.h"

static void ft_putnbr(long n, int *len)
{
    if (n < 0)
    {
        *len += ft_putchar_len('-');
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n / 10, len);
    *len += ft_putchar_len(n % 10 + '0');
}

int ft_print_int(int n)
{
    int len = 0;
    ft_putnbr(n, &len);
    return (len);
}