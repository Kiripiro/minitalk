SRCS	=  ft_memset.c \
		   ft_bzero.c \
		   ft_memcpy.c \
		   ft_memccpy.c \
		   ft_memmove.c \
		   ft_memchr.c \
		   ft_memcmp.c  \
		   ft_strlen.c \
		   ft_isalpha.c \
		   ft_isdigit.c \
		   ft_isalnum.c \
		   ft_isascii.c \
		   ft_isprint.c \
		   ft_ischar.c \
		   ft_toupper.c \
		   ft_tolower.c \
		   ft_strchr.c \
		   ft_strrchr.c \
		   ft_strncmp.c \
		   ft_strlcpy.c \
		   ft_strlcat.c \
		   ft_strcat.c \
		   ft_strnstr.c \
		   ft_atoi.c \
		   ft_atoll.c \
		   ft_calloc.c \
		   ft_strdup.c \
		   ft_substr.c \
		   ft_strjoin.c \
		   ft_strtrim.c \
		   ft_split.c \
		   ft_itoa.c \
		   ft_strmapi.c \
		   ft_putchar_fd.c \
		   ft_putstr_fd.c \
		   ft_putendl_fd.c \
		   ft_putnbr_fd.c \
		   get_next_line.c \
		   ft_lstnew.c \
		   ft_lstadd_front.c \
		   ft_lstsize.c \
		   ft_lstlast.c \
		   ft_lstadd_back.c \
		   ft_lstdelone.c \
		   ft_lstclear.c \
		   ft_lstiter.c \
		   ft_lstmap.c \
		   lst_int/ft_dellst_back_int.c \
		   lst_int/ft_dellst_front_int.c \
		   lst_int/ft_dellst_one_int.c \
		   lst_int/ft_lstadd_back_int.c \
		   lst_int/ft_lstadd_front_int.c \
		   lst_int/ft_lstaff_int.c \
		   lst_int/ft_lstclear_int.c \
		   lst_int/ft_lstlast_int.c \
		   lst_int/ft_lstnew_int.c \
		   lst_int/ft_lstsize_int.c \
		   ft_sort_int_tab.c

INCS	= -I libft.h

OBJS	= $(SRCS:.c=.o)

BONUS_OBJS	= $(BONUS_SRCS:.c=.o)

NAME	= libft.a

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

%.o : 		%.c libft.h
			@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) $(INCS)

$(NAME):	$(OBJS)
			@ar rcs $(NAME) $(OBJS)

bonus:		$(OBJS) $(BONUS_OBJS)
			@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

all:		$(NAME)

clean:
			@$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus
