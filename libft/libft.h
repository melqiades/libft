#ifndef LIBFT_H
# define LIBFT_H

int ft_atoi (const char *str);
void	bzero(void *s, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
int ft_isalnum(int arg);
int ft_isalpha(int arg);
int ft_isascii(int arg);
int ft_isdigit(int arg);
int ft_isprint(int arg);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif



