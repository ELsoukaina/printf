NAME = libftprintf.a
NAMELIBFT = libft/libft.a

SRCS =  ft_printf.c \
		ft_itoahex.c \
		ft_printhexmaj.c \
		ft_printhexmin.c \
		ft_chartostr.c \
		ft_strrev.c \
		ft_printstring.c \
		ft_printnumber.c \
		ft_printunsnumber.c \
		ft_printhex.c \
		ft_printp.c \


OBJ= $(SRCS:.c=.o)
FLG= -Wall -Wextra -Werror
INCLUDE= ft_printf.h

all: $(NAMELIBFT) $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	@cp libft/libft.a $(NAME)
	@ar rcs $(NAME) $(OBJ)

$(NAMELIBFT): 
	make -C libft/ all

clean:
	@/bin/rm -f $(OBJ)
	@echo "clean"

cleanlibft:
	@make -C libft/ clean

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "fclean"

fcleanlibft:
	@make -C libft/ fclean

%.o: %.c 
	gcc $(FLG) -c $< -I $(INCLUDE) 

re : relibft fclean all

relibft:
	@make -C libft/ re