#include "ft_printf.h"

static int  ft_process(char c, va_list args)
{
    if (c == 'c') return ft_print_char(va_arg(args, int));
    if (c == 's') return ft_print_str(va_arg(args, char *));
    if (c == 'p') return ft_print_ptr(va_arg(args, void *));
    if (c == 'd' || c == 'i') return ft_print_int(va_arg(args, int));
    if (c == 'u') return ft_print_uint(va_arg(args, unsigned int));
    if (c == 'x' || c == 'X') return ft_print_hex(va_arg(args, unsigned int), c);
    if (c == '%') return ft_print_percent();
    return (0);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int     count = 0;

    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format)
                count += ft_process(*format, args);
        }
        else
            count += ft_putchar_len(*format);
        format++;
    }
    va_end(args);
    return (count);
}