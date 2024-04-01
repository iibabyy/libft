/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:35:02 by ibaby             #+#    #+#             */
/*   Updated: 2024/03/31 22:35:02 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
#define LIBFT_H_

#include <stddef.h>

int     ft_atoi(char *str);
int     ft_isacii(char c);
int     ft_isalnum(char c);
int     ft_isalpha(char c);
int     ft_isdigit(char c);
int     ft_isprint(char c);
char    *ft_itoa(int c);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
size_t  ft_strlcpy(const char *src, char *dst, size_t size);
size_t  ft_strlen(char *str);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t n);
char    *ft_strrchr(const char *s, int c);
char    *ft_strchr(const char *str, int c);
void    ft_tolower(char c);
void    ft_toupper(char c);
void    *ft_memset(void *array, int value, size_t hmany);
void    ft_bzero(void *array, size_t lim);
char    *ft_strchr(const char *str, int c);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *str, int tofind, size_t n);
int     ft_memcmp(const void *str1, const void *str2, size_t n);
void    *ft_calloc(size_t el_count, size_t el_size);
char    *ft_strdup(const char *src);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(const char *s1, const char *s2);
char    *ft_strtrim(char const *s1, char const *set);

#endif