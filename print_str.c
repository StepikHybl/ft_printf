#include "ft_printf.h"

int ft_print_str(char *s)
{
    if (!s)
        return (ft_putstr_len("(null)"));
    return (ft_putstr_len(s));
}