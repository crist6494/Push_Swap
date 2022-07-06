NAME	=	push_swap

CC	= gcc

CFLAGS	=	-Wall -Wextra -Werror

SRC_DIR	=	./src/
SRCS	=	push_swap.c	\
			main_push_swap.c			

OBJ_DIR	=	./obj/
OBJS	=	$(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

all: lib obj $(NAME)

obj:
	mkdir obj

$(OBJ_DIR)%.o:$(SRC_DIR)%.c
	$(CC) $(CFLAGS) -I ./includes/ -I ./42-library/ -o $@ -c $<

lib:
	make -C	./42-library

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -L ./42-library -l ft -o $(NAME)

clean:
	make clean -C ./42-library
	rm -rf obj $(OBJS)

fclean: clean
	make fclean -C ./42-library
	rm -rf obj $(NAME)

re: fclean all

prueba:
		./push_swap 8 6 7 65 5 4 

.PHONY:     all clean fclean re