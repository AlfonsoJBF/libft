/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfonsojbf <albustos@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:28:44 by alfonsojbf        #+#    #+#             */
/*   Updated: 2026/05/13 22:35:24 by alfonsojbf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

static int run_test(const char *s1, const char *s2, int test_id)
{
	int result_ft = ft_strcmp(s1, s2);
	int result_std = strcmp(s1, s2);
	int success = 0;

	if ((result_ft > 0 && result_std > 0) ||
		(result_ft < 0 && result_std < 0) ||
		(result_ft == 0 && result_std == 0))
	{
		printf(GREEN "[TEST %02d] OK:     \"%s\" vs \"%s\" | Libft: %d, Std: %d\n" RESET,
				test_id, s1, s2, result_ft, result_std);
		success = 1;
	}
	else
	{
		printf(RED "[TEST %02d] KO:     \"%s\" vs \"%s\" | Libft: %d, Std: %d\n" RESET,
				test_id, s1, s2, result_ft, result_std);
	}
	return (success);
}

void test_strcmp(void)
{
	int passed = 0;
	int total = 10;

	printf("--- INICIANDO BATERÍA DE TESTS PARA FT_STRCMP ---\n\n");

	passed += run_test("hola", "hola", 1);
	passed += run_test("hola", "holaa", 2);
	passed += run_test("holaa", "hola", 3);
	passed += run_test("", "", 4);
	passed += run_test("abc", "abd", 5);
	passed += run_test("abd", "abc", 6);
	passed += run_test("\200", "\0", 7);
	passed += run_test("test\0invisible", "test", 8);
	passed += run_test("Abc", "abc", 9);
	passed += run_test("123", "124", 10);

	printf("\n--- RESULTADO FINAL FT_STRCMP: %d/%d ---\n\n", passed, total);
}
