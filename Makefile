NAME = libftprintf.a
NAMELIBFT = ./libft/libft.a

SRCS =  ft_printf.c \
		ft_itoahex.c \
		ft_printhexmaj.c \
		ft_printhexmin.c \
		ft_chartostr.c \
		ft_strrev.c \
		ft_printstring.c \
		ft_printnumber.c \
		ft_printunsnumber.c \
		ft_printphex.c \


CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDES = ft_printf.h
OBJS = $(SRCS:.c=.o)

all =  $(NAME)

# $(NAMELIBFT):
# 	make -C libft/

$(NAME): $(OBJS)
	cp libft/libft.a .
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(INCLUDE)
		$(CC) -c $(FLAGS) $< -I $(INCLUDE)

clean :
	# $(MAKE) clean -C ./libft
	rm -rf $(OBJS)

fclean : clean
	# $(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all