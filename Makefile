NAME    = libftprintf.a
SRCS    = ft_printf.c print_char.c print_str.c print_ptr.c \
          print_int.c print_uint.c print_hex.c print_percent.c utils.c
OBJS    = $(SRCS:.c=.o)
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rcs
RM      = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re