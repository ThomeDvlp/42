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

FLAGS		= 	-Wall -Wextra -Werror

SRC			=	push_swap.c 

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
				$(CC) $(FLAGS) -I $(HEAD) -o $(NAME) $(OBJ) $(LIBFT)
				printf "$(SUCCESS)	push_swap ready!!! 🚀\n\n$(NC)"


clean:			
				$(RM) *.o

fclean:			clean
				$(RM) $(NAME)

re:				fclean all
