CC = cc
NAME = libft.a
AR = ar rcs
RM = rm -f
SRCS_FLD = srcs
INCS_FLD = includes
SRCS = $(SRCS_FLD)/ft_putchar.c $(SRCS_FLD)/ft_swap.c $(SRCS_FLD)/ft_putstr.c $(SRCS_FLD)/ft_strlen.c $(SRCS_FLD)/ft_strcmp.c
INCS = $(INCS_FLD)/ft.h
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)



all:	$(NAME)

libft.a:	$(OBJS)
	$(AR) $(NAME) $(OBJS)

$(SRCS_FLD)/%.o:	$(SRCS_FLD)/%.c $(INCS)
	$(CC) $(CFLAGS) -I $(INCS_FLD) -c $< -o $@

clean:	
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re