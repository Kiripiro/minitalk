SERVER			=		server

CLIENT			=		client

HEADER			=		minitalk.h

CC				=		gcc

CFLAGS 			= 		-Wall -Wextra -Werror

LIB 			=		my_libft/libft.a

all				:		LIBFT $(SERVER) $(CLIENT)

LIBFT:
			@make -C my_libft
			@echo "\033[34m[MY_LIBFT] Compiled\033[0m"

all:		$(NAME)

$(NAME):	$(CLIENT) $(SERVER)

$(SERVER): 	srcs/server.o
			@$(CC) $(CFLAGS) srcs/server.o -I $(HEADER) $(LIB) -o $(SERVER)
			@echo "\033[34m[SERVER] Compiled\033[0m"

$(CLIENT):	srcs/client.o
			@$(CC) $(CFLAGS) srcs/client.o -I $(HEADER) $(LIB) -o $(CLIENT)
			@echo "\033[34m[CLIENT] Compiled\033[0m"

%.o:		%.c $(HEADER) $(LIB)
			@$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean:
			@rm -f */*.o
			@make clean -C my_libft

fclean:		clean
			@rm -f $(SERVER) $(CLIENT)
			@make fclean -C my_libft

re:			fclean all

.PHONY: all bonus clean fclean re
