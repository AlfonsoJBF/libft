/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albustos   <albustos@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 00:00:00 by albustos          #+#    #+#             */
/*   Updated: 2026/05/20 00:00:00 by albustos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"
#include <bsd/string.h>

static int run_test(const char *src, size_t dsize, int test_num)
{
	char dst_ft[256];
	char dst_std[256];
	size_t result_ft;
	size_t result_std;
	int success;

	result_ft = ft_strlcpy(dst_ft, src, dsize);
	result_std = strlcpy(dst_std, src, dsize);

	success = (result_ft == result_std);
	if (dsize > 0)
	{
		success = success && (strcmp(dst_ft, dst_std) == 0);
	}

	printf("Test %02d: src=\"%s\", dsize=%zu\n", test_num, src, dsize);
	printf("  - Esperado: retorno=%zu, dst=\"%s\"\n", result_std,
		(dsize > 0) ? dst_std : "(no copia)");
	printf("  - Obtenido: retorno=%zu, dst=\"%s\"\n", result_ft,
		(dsize > 0) ? dst_ft : "(no copia)");
	if (success)
		printf(GREEN "  - Resultado: OK\n" RESET);
	else
		printf(RED "  - Resultado: KO\n" RESET);
	printf("------------------------------\n");
	return (success);
}

void test_strlcpy(void)
{
	int passed = 0;
	int total = 10;

	printf("--- INICIANDO BATERÍA DE TESTS PARA FT_STRLCPY ---\n\n");

	passed += run_test("Hola", 10, 1);
	passed += run_test("Hola", 4, 2);
	passed += run_test("Hola", 3, 3);
	passed += run_test("Hola", 1, 4);
	passed += run_test("Hola", 0, 5);
	passed += run_test("", 10, 6);
	passed += run_test("", 1, 7);
	passed += run_test("", 0, 8);
	passed += run_test("Lorem ipsum dolor sit amet", 10, 9);
	passed += run_test("Test", 256, 10);

	printf("\n--- RESULTADO FINAL FT_STRLCPY: %d/%d ---\n\n", passed, total);
}
