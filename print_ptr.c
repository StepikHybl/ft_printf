#include "ft_printf.h"

int ft_print_ptr(void *p)
{
    int len = 0;
    if (!p)
        return (write(1, "0x0", 3));
    len += write(1, "0x", 2);
    ft_putnbr_base((unsigned long)p, "0123456789abcdef", &len);
    return (len);
}