#include "ft_printf.h"

int ft_print_uint(unsigned int n)
{
    int len = 0;
    ft_putnbr_base(n, "0123456789", &len);
    return (len);
}