NC			=	\e[0m
RED			=	\e[0;91m
ORANGE		=	\e[93m
GREEN		=	\e[0;92m
PURPLE		=	\e[0;95m
BLUE		=	\e[0;34m
BOLD		=	\e[1m
RESET		=	\e[0m

SUCCESS				=	[$(GREEN)SUCCESS$(RESET)]
INFO				=	[$(ORANGE)INFO$(RESET)]

HEAD				=	./includes/

SRC_SERVER			=	src/server/server.c

SRC_SERVER_BONUS	=	src/server/server_bonus.c

SRC_CLIENT			=	src/client/client.c

SRC_CLIENT_BONUS	=	src/client/client_bonus.c

SERVER				=	server

SERVER_BONUS		=	server_bonus

CLIENT				=	client

CLIENT_BONUS		=	client_bonus

LIBFT				=	./libft/libft.a

LIB_DIR				=	./libft/

OBJ1				=	$(SRC_SERVER:.c=.o)

OBJ1_BONUS			=	$(SRC_SERVER_BONUS:.c=.o)

OBJ2				=	$(SRC_CLIENT:.c=.o)

OBJ2_BONUS			=	$(SRC_CLIENT_BONUS:.c=.o)

CC					=	cc

FLAGS				=	-Wall -Wextra -Werror

RM					=	rm -f

MAKEFLAGS			=+	--silent

.c.o:
					$(CC) $(FLAGS) -I$(HEAD) -c $< -o $(<:.c=.o)
					printf "\n[$(GREEN)OK$(NC)]		
					$(ORANGE)$(<:.c=.o)$(NC) compliled ✅\n\n"

all:				$(SERVER) $(CLIENT)

bonus:				$(SERVER_BONUS) $(CLIENT_BONUS)

$(SERVER):			$(OBJ1)
					make -C  $(LIB_DIR)  
					printf "$(SUCCESS)	libft.a created 🚀\n\n$(NC)"
					$(CC) $(FLAGS) -I $(HEAD) -o $(SERVER) $(OBJ1) $(LIBFT)
					printf "$(SUCCESS)	server ready!!! 🚀\n\n$(NC)"

$(SERVER_BONUS):	$(OBJ1_BONUS)
					make -C $(LIB_DIR)
					printf "$(SUCCESS)	libft.a created	 🚀\n\n$(NC)"
					$(CC) $(FLAGS) -I $(HEAD) -o $(SERVER_BONUS) $(OBJ1_BONUS) $(LIBFT)
					printf "$(SUCCESS)	server_bonus ready!!! 🚀\n\n$(NC)"

$(CLIENT):			$(OBJ2)
					make -C  $(LIB_DIR)  
					$(CC) $(FLAGS) -I $(HEAD) -o $(CLIENT) $(OBJ2) $(LIBFT)
					printf "$(SUCCESS)	client ready!!! 🚀\n\n$(NC)"

$(CLIENT_BONUS):	$(OBJ2_BONUS)
					make -C $(LIB_DIR)
					$(CC) $(FLAGS) -I $(HEAD) -o $(CLIENT_BONUS) $(OBJ2_BONUS) $(LIBFT)
					printf "$(SUCCESS)	client_bonus ready!!! 🚀\n\n$(NC)"


clean:
					make -C $(LIB_DIR) clean
					$(RM) $(OBJ1)
					$(RM) $(OBJ1_BONUS)
					$(RM) $(OBJ2)
					$(RM) $(OBJ2_BONUS)
					$(RM) $(SERVER)	
					$(RM) $(SERVER_BONUS)	
					$(RM) $(CLIENT)
					$(RM) $(CLIENT_BONUS)
					printf "\n$(INFO) $(RED)		all *.o files are deleted 🙉\n$(NC)"
					printf "\n$(INFO) $(RED) 	server and client deleted 🙊\n$(NC)"

fclean:				clean
					make -C $(LIB_DIR) fclean
					printf "\n"
					printf "$(INFO) $(BOLD)	$(RED)		  libft.a deleted 🙈\n\n$(NC)"

re:					fclean all

rebouns:			fclean bonus

.PHONY:		all clean fclean re
