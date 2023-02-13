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

CC			=	cc

#PTH_INCLUDE	=	includes/
	

CFLAGS		= 	-Wall -Wextra -Werror -g 

#INCLUDE		=	-I $(PTH_INCLUDE)

SRC_OPS		=	ps_swap.c		\
				ps_rotate.c		\
				ps_rev_rotate.c	\
				ps_push.c

SRC_SRC		=	constructor.c	\
				index.c			\
				organizer.c		\
				stk_methods.c	\
				push_swap.c

SRC_VLD		=	checker.c 

SRC			=	$(addprefix operations/,$(SRC_OPS)) \
				$(addprefix src/, $(SRC_SRC))		\
				$(addprefix validation/, $(SRC_VLD))



LIBFT		=	-L$(LIB_DIR) -lft

LIB_DIR		=	libft

OBJ			=	$(SRC:.c=.o)

RM			=	rm -fr

MAKEFLAGS	=	--silent


.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
				printf "[$(GREEN)OK$(NC)] \
				$(ORANGE)$(<:.c=.o)$(NC) compliled ✅\n"

all: 			$(OBJ)
				make -C $(LIB_DIR)
				printf "\n\n$(SUCCESS)	libft.a created 🚀\n\n$(NC)"
				$(CC) $(CFLAGS)  -o $(NAME) $(OBJ) $(LIBFT)
				printf "$(SUCCESS)	push_swap ready!!! 🚀\n\n$(NC)"


clean:			
				make -C $(LIB_DIR) clean
				$(RM) ${OBJ}

fclean:			clean
				make -C $(LIB_DIR) fclean
				$(RM) $(NAME)

re:				fclean all
