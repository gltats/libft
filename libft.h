/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:08:11 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/21 20:39:54 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int x);
int				ft_isalpha(int x);
int				ft_isascii(int x);
int				ft_isdigit(int x);
int				ft_isprint(int x);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
char			*ft_strchr(const char *s, int c);
char			*ft_strcat(char *dest, char *src);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_islowercase(int c);
char			*ft_strnstr(const char *bg, const char *sm, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);
#endif