/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-brui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 13:19:36 by pde-brui          #+#    #+#             */
/*   Updated: 2017/08/31 08:44:40 by pde-brui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include "map.h"

# define ABS(x) (((x) < 0) ? -(x) : (x))
# define MIN(a,b) (((a) < (b)) ? (a) : (b))
# define MAX(a,b) (((a) > (b)) ? (a) : (b))

/*
** ============== Part 1 ==============
*/

/*
**	mem functions
*/
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);

/*
**	str functions
*/
size_t			ft_strlen(const char *s);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, int len);
char			*ft_strdup(const char *s1);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);

/*
**	char functions
*/
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_isupper(int c);
int				ft_islower(int c);
int				ft_iswhite(int c);
int				ft_isnumbr(char *str);

/*
** ============== Part 2 ==============
*/

/*
**	memory functions
*/
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);

/*
**	str functions
*/
char			*ft_strnew(size_t size);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(const char *s, char (*f)(char));
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int				ft_strequ(const char *s1, const char *s2);
int				ft_strnequ(const char *s1, const char *s2, size_t n);
char			*ft_strsub(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s);
char			**ft_strsplit(const char *s, char c);
char			*ft_itoa(int n);

/*
**	put functions
*/
void			ft_putchar(char c);
void			ft_putstr(const char *s);
void			ft_putendl(const char *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(const char *s, int fd);
void			ft_putendl_fd(const char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/*
**	Part 3
*/

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

t_list			*ft_lstnew(const void *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
**	Additional functions
*/

size_t			ft_strclen(const char *s, int c);
char			*ft_strccpy(char *dst, const char *src, char d);
char			*ft_strccat(char *dst, const char *src, char d);
/*
**	The entirety of the first string will be copied into the returned char *
**	The copying will only stop if it finds the delimiter in the second string
*/
char			*ft_strcjoin(const char *s1, const char *s2, char d);
char			*ft_strcdup(const char *str, char d);
/*
**	90% sure the returned string will always be nul-terminated
*/
char			*ft_strndup(const char *str, size_t n);
void			ft_putnbrbase(int nbr, char base);
void			ft_lstsimplefree(void *content, size_t content_size);
void			ft_lstaddr(t_list **alst, t_list *new);
t_list			*ft_lstgetr(t_list *lst);
int				ft_lstlen(t_list *lst);
int				ft_chrc(char *str, char c);
/*
**	Frees oldstr and sets it equal to newstr, then returns newstr
*/
char			*ft_strset(char **oldstr, char *newstr);

/*
**	ft_swap
*/
void			ft_cpswap(char **a, char **b);

#endif
