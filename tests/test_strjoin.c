/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfonsojbf <albustos@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 01:40:02 by alfonsojbf        #+#    #+#             */
/*   Updated: 2026/05/19 00:00:00 by alfonsojbf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

static int run_test(const char *s1, const char *s2, const char *expected, int test_num)
{
	char *res;
	int success;

	res = ft_strjoin(s1, s2);
	success = 0;
	if (res == NULL)
	{
		if (expected == NULL)
			success = 1;
	}
	else if (expected != NULL && strcmp(res, expected) == 0)
	{
		success = 1;
	}

	printf("Test %02d: s1=%s, s2=%s\n", test_num,
		(s1 ? s1 : "NULL"), (s2 ? s2 : "NULL"));
	if (success)
		printf(GREEN "  - Resultado: OK\n" RESET);
	else
		printf(RED "  - Resultado: KO\n" RESET);
	if (res)
		free(res);
	return (success);
}

void test_strjoin(void)
{
	int passed = 0;
	int total = 7;

	printf("--- INICIANDO BATERÍA DE TESTS PARA FT_STRJOIN ---\n\n");
	passed += run_test("Hola ", "mundo", "Hola mundo", 1);
	passed += run_test("", "42", "42", 2);
	passed += run_test("C-Language", "", "C-Language", 3);
	passed += run_test("", "", "", 4);
	passed += run_test("Deep\0Learning", "Test", "DeepTest", 5);
	passed += run_test(NULL, "S2", NULL, 6);
	passed += run_test("S1", NULL, NULL, 7);

	printf("\n--- RESULTADO FINAL FT_STRJOIN: %d/%d ---\n\n", passed, total);
}
