/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 19:03:51 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/04 16:50:36 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				ft_bzero(void *ptr, size_t l);
void				*ft_calloc(size_t number, size_t size);
int					ft_isalnum(int mcgyver);
int					ft_isalpha(int mcgyver);
int					ft_isascii(int i);
int					ft_isdigit(int num);
int					ft_isprint(int c);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t l);
void				*ft_memmove(void *dest, const void *src, size_t l);
void				*ft_memset(void *ptr, int c, size_t l);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *src);
size_t				ft_strlcat(char *dst, const char *src, size_t dst_size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
int					ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *big, const char *small, size_t len);
char				*ft_strrchr(const char *s, int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int index,
							char c));
void				ft_striteri(char *s, void (*f)(unsigned int index,
							char *c));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				**ft_split(const char *s, char c);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_substr(char const *s, unsigned int start, size_t len);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

#endif
