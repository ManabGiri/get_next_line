#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 100000
# define SIZE (stock->content_size)
# define CONTENT (stock->content)
# define RET (ret - i - 1)
# define T_SIZE (*SIZE - j - 1)

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

typedef	struct	s_buff
{
	char 			*buffer;
	int				fd;
}				t_buff;

typedef	struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;


int			get_next_line(const int fd, char **line);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
void		ft_putstr(char const *s);
void		ft_putchar(char c);
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlen(const char *s);
char		**ft_strsplit(char const *str, char charset);
char		*ft_concat_tab(char **tab);
char		*ft_strcat(char *s1, const char *s2);
void		ft_print_words_tables(char **tab);
void		ft_memdel(void **ap);
t_list		*ft_lstnew(void const *content, size_t content_size);
void		ft_lstadd_end(t_list **alst, t_list *new);
char		*ft_strnew(size_t size);
void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void		ft_lstadd(t_list **alst, t_list *new);
void		ft_strdel(char **as);
char		*ft_strchr(const char *s, int c);
void		ft_structdelete(t_list *astruct);

#endif
