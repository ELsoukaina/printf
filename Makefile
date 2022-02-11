LIBFT = ./libft/libft.a

N_TEMP = temp.a

NAME = libftprintf.a

SRCS =  ft_printf.c \
		sources/ft_treatment.c \
		sources/ft_treat_width.c \
		sources/ft_u_itoa.c \
		sources/ft_ull_base.c \
		sources/ft_putchar.c \
		sources/ft_str_tolower.c \
		sources/ft_putstrprec.c \
		sources/ft_treat_string.c \
		sources/ft_treat_char.c \
		sources/ft_treat_pointer.c \
		sources/ft_treat_int.c \
		sources/ft_treat_uint.c \
		sources/ft_treat_percent.c \
		sources/ft_treat_hexa.c \
		sources/ft_treat_flags.c 

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all