#include "ft_printf.h"

int ft_print_ptr(void *p)
{
    int len = 0;
    unsigned long addr;

    addr = (unsigned long)p;
    
    if (addr == 0)
    {
        // Některé implementace používají (nil) pro NULL
        write(1, "(nil)", 5);
        return (5);
    }
    
    write(1, "0x", 2);
    len = 2;
    ft_putnbr_base(addr, "0123456789abcdef", &len);
    return (len);
}