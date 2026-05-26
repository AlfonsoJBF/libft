/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albustos <albustos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:44:45 by albustos          #+#    #+#             */
/*   Updated: 2026/05/26 13:32:34 by albustos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

static int run_test(int n, const char *expected, int test_num)
{
    char *result = ft_itoa(n);
    int success;

    if (!result)
    {
        printf(RED "Test %02d: n = %d -> KO (retornó NULL)\n" RESET, test_num, n);
        return (0);
    }
    success = (strcmp(result, expected) == 0);
    if (success)
        printf(GREEN "Test %02d: n = %d -> OK (\"%s\")\n" RESET, test_num, n, result);
    else
        printf(RED "Test %02d: n = %d -> KO (esperado \"%s\", obtenido \"%s\")\n" RESET,
               test_num, n, expected, result);
    free(result);
    return (success);
}

void test_itoa(void)
{
    int passed = 0;
    int total = 9;

    printf("--- INICIANDO BATERÍA DE TESTS PARA FT_ITOA ---\n\n");

    passed += run_test(0, "0", 1);
    passed += run_test(5, "5", 2);
    passed += run_test(-5, "-5", 3);
    passed += run_test(42, "42", 4);
    passed += run_test(-42, "-42", 5);
    passed += run_test(100, "100", 6);
    passed += run_test(1001, "1001", 7);
    passed += run_test(2147483647, "2147483647", 8);
    passed += run_test(-2147483648, "-2147483648", 9);

    printf("\n--- RESULTADO FINAL FT_ITOA: %d/%d ---\n\n", passed, total);
}
