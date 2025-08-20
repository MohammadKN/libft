/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnemrini <mnemrini@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:21:20 by mnemrini          #+#    #+#             */
/*   Updated: 2025/08/20 19:48:58 by mnemrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <fcntl.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_strlen(char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *str);
char    *ft_strdup(const char *s);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
void    *memcpy(void *dest, const void *src, size_t n);

#endif
