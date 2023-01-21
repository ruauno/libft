#ifndef libft
#define libft

#include <unistd.h>

// Libc functions

int isalphaTest(int argument);
int isdigit(int arg );
int isalnum(int argument);
int isascii(int c);
int isprint( int arg );
size_t strlen(const char *str);
void *memset(void *str, int c, size_t n);
void bzero(void *s, size_t n);
void *memcpy(void *dest, const void * src, size_t n);
void *memmove(void *str1, const void *str2, size_t n);
size_t strlcpy(char *destination, const char *source, size_t size);
size_t strlcat(char *destination, const char *source, size_t size);
int toupper(int ch);
int tolower(int argument);
char *strchr(const char *str, int c);
char *strrchr(const char *str, int c);
int strncmp(const char *str1, const char *str2, size_t n);
void *memchr(const void *str, int c, size_t n);
int memcmp(const void *str1, const void *str2, size_t n);
char *strnstr(const char *s1, const char *s2, size_t n);
int atoi(const char *str);

// Additional functions

char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char **ft_split(char const *s, char c);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

// bonus

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstclear(t_list **lst, void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));


#endif