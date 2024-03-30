#ifndef LIBFT_H_
#define LIBFT_H_

int     ft_atoi(char *str);
int     ft_isacii(char c);
int     ft_isalnum(char c);
int     ft_isalpha(char c);
int     ft_isdigit(char c);
int     ft_isprint(char c);
char    *ft_itoa(int c);
int     ft_strlcat(char *dst, const char *src, int size);
int     ft_strlcpy(const char *src, char *dst, int size);
int     ft_strlen(char *str);
int     ft_strncmp(const char *s1, const char *s2, int n);
char    *ft_strnstr(char *big, char *little, int n);
char    *ft_strrchr(const char *s, int c);
void    ft_tolower(char c);
void    ft_toupper(char c);

#endif