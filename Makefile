NC		=	\e[0m
RED		=	\e[0;91m
ORANGE	=	\e[93m
GREEN	=	\e[0;92m
PURPLE	=	\e[0;95m
BLUE	=	\e[0;34m
BOLD	=	\e[1m
RESET	=	\e[0m

SUCCESS		=	[$(GREEN)SUCCESS$(RESET)]
INFO		=	[$(ORANGE)INFO$(RESET)]

NAME		=	push_swap

HEAD		=	./includes/

CC			=	cc

CFLAGS		= 	-Wall -Wextra -Werror -g 

SRC			=	push_swap.c 	\
				constructor.c	\
				checker.c		


LIBFT		=	./libft/libft.a

LIB_DIR		=	./libft

OBJ			=	$(SRC:.c=.o)

RM			=	rm -fr

#MAKEFLAGS	=	--silent


# .c.o:
# 				$(CC) $(FLAGS) -I$(HEAD) -c $< -o $(<:.c=.o)
# 				printf "\n[$(GREEN)OK$(NC)]
# 				$(ORANGE)$(<:.c=.o)$(NC) compliled ✅\n\n"

all: 			$(OBJ)
				make -C $(LIB_DIR)
				printf "$(SUCCESS)	libft.a created 🚀\n\n$(NC)"
				$(CC) $(CFLAGS) -I $(HEAD) -o $(NAME) $(OBJ) $(LIBFT)
				printf "$(SUCCESS)	push_swap ready!!! 🚀\n\n$(NC)"


clean:			
				make -C $(LIB_DIR) clean
				$(RM) *.o

fclean:			clean
				make -C $(LIB_DIR) fclean
				$(RM) $(NAME)

re:				fclean all
