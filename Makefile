SERVER		=	server
CLIENT		=	client

HEADER		=	incs/minitalk.h
CFLAGS 		= 	-Wall -Wextra -Werror
LIB 		=	my_libft/libft.a

all:		LIBFT $(CLIENT) $(SERVER) 

LIBFT:
			@make -C my_libft
			@echo "\033[34m[MY_LIBFT] Compiled.\033[0m"

$(NAME):	all

$(SERVER): 	srcs/server.o
			@$(CC) $(CFLAGS) srcs/server.o -I $(HEADER) $(LIB) -o $(SERVER)
			@echo "\033[34m[SERVER] Compiled.\033[0m"

$(CLIENT):	srcs/client.o
			@$(CC) $(CFLAGS) srcs/client.o -I $(HEADER) $(LIB) -o $(CLIENT)
			@echo "\033[34m[CLIENT] Compiled.\033[0m"

%.o:		%.c $(HEADER)
			@$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean:
			@$(RM) srcs/client.o srcs/server.o 
			@make clean -C my_libft

fclean:		clean
			@$(RM) $(SERVER) $(CLIENT)
			@make fclean -C my_libft

re:	
		@$(MAKE) fclean
		@$(MAKE) all

.PHONY: all bonus clean fclean re



