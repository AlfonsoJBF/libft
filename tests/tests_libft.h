/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_libft.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfonsojbf <albustos@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 00:00:00 by alfonsojbf        #+#    #+#             */
/*   Updated: 2026/05/19 00:00:00 by alfonsojbf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_LIBFT_H
#define TESTS_LIBFT_H

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define GREEN "\033[0;32m"
#define RED   "\033[0;31m"
#define RESET "\033[0m"

void test_char_classification(void);
void test_split(void);
void test_atoi(void);
void test_itoa(void);
void test_strlcpy(void);
void test_strjoin(void);
void test_strcmp(void);

#endif
