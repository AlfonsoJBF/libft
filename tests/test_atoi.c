/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfonsojbf <albustos@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 17:48:46 by alfonsojbf        #+#    #+#             */
/*   Updated: 2026/05/08 18:08:58 by alfonsojbf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

static int run_test(const char *input, int test_num)
{
    int expected = atoi(input);
    int result = ft_atoi(input);
    int success = (result == expected);

    printf("Test %02d: [%s]\n", test_num, input);
    printf("  - Esperado: %d\n", expected);
    printf("  - Obtenido: %d\n", result);
    if (success)
        printf(GREEN "  - Resultado: OK\n" RESET);
    else
        printf(RED "  - Resultado: KO\n" RESET);
    printf("------------------------------\n");
    return (success);
}

void test_atoi(void)
{
    int passed = 0;
    int total = 16;

    printf("--- INICIANDO BATERÍA DE TESTS PARA FT_ATOI ---\n\n");

    passed += run_test("0", 1);
    passed += run_test("42", 2);
    passed += run_test("-42", 3);
    passed += run_test("   123", 4);
    passed += run_test("\t\n\v\f\r 456", 5);
    passed += run_test("+789", 6);
    passed += run_test("--123", 7);
    passed += run_test("++123", 8);
    passed += run_test("-+123", 9);
    passed += run_test("1234ab56", 10);
    passed += run_test("   -123456789hola", 11);
    passed += run_test("2147483647", 12);
    passed += run_test("-2147483648", 13);
    passed += run_test("", 14);
    passed += run_test("  -  ", 15);
    passed += run_test("abc", 16);

    printf("\n--- RESULTADO FINAL FT_ATOI: %d/%d ---\n\n", passed, total);
}


