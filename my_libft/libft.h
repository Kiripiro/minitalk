/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:45:42 by atourret          #+#    #+#             */
/*   Updated: 2021/06/05 18:17:33 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_list_int
{
	int					content;
	int					rank;
	struct s_list_int	*next;
}t_list_int;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_ischar(char *str, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlcpy(char *restrict dst, const char *src, \
					size_t dstsize);
size_t				ft_strlcat(char *restrict dst, const char *src, \
					size_t dstsize);
char				*ft_strnstr(const char *haystack, const char *needle, \
					size_t len);
int					ft_atoi(const char *str);
int					ft_atoi_base(char *str, char *base);
char				*ft_strcat(char *dest, char *src);

void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);

char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char *s1, char *s2, int free1, int free2);
char				*ft_strjoin_c(char *s1, char c);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *), \
					void (*del)(void *));

int					get_next_line(int fd, char **line);
void				ft_lstadd_back_int(t_list_int **list, int value);
void				ft_dellst_back_int(t_list_int **list);
void				ft_dellst_one_int(t_list_int **list, int i);
void				ft_lstadd_front_int(t_list_int **list, int value);
void				ft_dellst_front_int(t_list_int **list);
void				ft_lstaff_int(t_list_int *list);
void				ft_lstaff_color_int(t_list_int *list, char *color);
void				ft_lstclear_int(t_list_int **list);
t_list_int			*ft_lstlast_int(t_list_int *lst);
t_list_int			*ft_lstn(t_list_int *lst, int n);
t_list_int			*ft_lstnew_int(int content);
int					ft_lstsize_int(t_list_int *lst);
long long			ft_atoll(char *str);
int					*ft_sort_int_tab(int *tab, int size);

#endif
