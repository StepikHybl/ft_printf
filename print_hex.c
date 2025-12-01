#include "ft_printf.h"

int ft_print_hex(unsigned int n, char format)
{
    char *base = (format == 'X') ? "0123456789ABCDEF" : "0123456789abcdef";
    int len = 0;
    ft_putnbr_base(n, base, &len);
    return (len);
}