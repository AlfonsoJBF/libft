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

static int	run_test(const char *s1, const char *s2, int test_id)
{
	int result_ft = ft_strcmp(s1, s2);
	int result_std = strcmp(s1, s2);
	int success = 0;

	// En strcmp, nos importa el signo, no siempre el valor exacto
	// aunque en muchas implementaciones de Libft se busca paridad total.
	if ((result_ft > 0 && result_std > 0) || 
		(result_ft < 0 && result_std < 0) || 
		(result_ft == 0 && result_std == 0))
	{
		printf("[TEST %02d] OK:     \"%s\" vs \"%s\" | Libft: %d, Std: %d\n", 
				test_id, s1, s2, result_ft, result_std);
		success = 1;
	}
	else
	{
		printf("[TEST %02d] FALLO:  \"%s\" vs \"%s\" | Libft: %d, Std: %d\n", 
				test_id, s1, s2, result_ft, result_std);
	}
	return (success);
}

void	test_strcmp(void)
{
	int count = 0;
	int total = 10;

	printf("--- INICIANDO BATERÍA DE TESTS PARA FT_STRCMP ---\n\n");

	count += run_test("hola", "hola", 1);           // Cadenas idénticas
	count += run_test("hola", "holaa", 2);          // S1 más corta
	count += run_test("holaa", "hola", 3);          // S1 más larga
	count += run_test("", "", 4);                   // Cadenas vacías
	count += run_test("abc", "abd", 5);             // Diferencia al final
	count += run_test("abd", "abc", 6);             // Diferencia al final (inverso)
	count += run_test("\200", "\0", 7);             // Caracteres extendidos (unsigned char check)
	count += run_test("test\0invisible", "test", 8); // Corte en nulo
	count += run_test("Abc", "abc", 9);             // Case sensitivity
	count += run_test("123", "124", 10);            // Numéricos

	printf("\n--- RESULTADO FINAL: %d/%d ---\n", count, total);
}
