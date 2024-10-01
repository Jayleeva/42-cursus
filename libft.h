/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyglardo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:56:42 by cyglardo          #+#    #+#             */
/*   Updated: 2024/10/01 16:59:40 by cyglardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *str);
void	*ft_memset(void *b, int c, size_t len);
//?	ft_bzero(?);
//?	ft_memcpy(?);
//?	ft_memmove(?);
int	ft_strlcpy(char *dest, char *src, int size);
int	ft_strlcat(char *dest, char *src, int size);
//?	ft_toupper(?);
//?	ft_tolower(?);
//?	ft_strchr(?);
//?	ft_strrchr(?);
int	ft_strcmp(char *s1, char *s2);
//?	ft_memchr(?);
//?	ft_memcmp(?);
char	*ft_strnstr(char *str, char *to_find);
int	ft_atoi(char *str);

//besoin de malloc
//?	ft_calloc(?);
char	*ft_strdup(char *src);

//fonctions absentes/differentes de la libc
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const*s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
