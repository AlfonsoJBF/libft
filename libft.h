/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfonsojbf <albustos@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 02:21:13 by alfonsojbf        #+#    #+#             */
/*   Updated: 2026/05/13 22:28:37 by alfonsojbf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

//Types
int	ft_isspace(char c);
int ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

// String.h
size_t ft_strlen(const char *c);
int ft_atoi(const char *ptr);
int ft_strcmp(const char *s1, const char *s2);
char *ft_itoa(int n);
char *ft_strjoin(const char *s1, const char *s2);

// General utilites
int	ft_count_words(char *str);
char **ft_split(const char *s, char c);

#endif
