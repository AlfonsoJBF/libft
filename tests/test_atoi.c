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

#include "libft.h"

void run_test(const char *input, int test_num) {
    int expected = atoi(input);
    int result = ft_atoi(input);

    printf("Test %02d: [%s]\n", test_num, input);
    printf("  - Esperado: %d\n", expected);
    printf("  - Obtenido: %d\n", result);
    
    if (result == expected) {
        printf("  - Resultado: ✅ PASSED\n");
    } else {
        printf("  - Resultado: ❌ FAILED\n");
    }
    printf("------------------------------\n");
}

void test_atoi(void) {
    printf("=== Iniciando TDD para ft_atoi ===\n\n");

    // 1. Casos Básicos
    run_test("0", 1);
    run_test("42", 2);
    run_test("-42", 3);

    // 2. Espacios en blanco (isspace según el estándar)
    run_test("   123", 4);
    run_test("\t\n\v\f\r 456", 5);

    // 3. Gestión de signos
    run_test("+789", 6);
    run_test("--123", 7); // Debería dar 0, solo se permite un signo
    run_test("++123", 8); // Debería dar 0
    run_test("-+123", 9); // Debería dar 0

    // 4. Caracteres mixtos
    run_test("1234ab56", 10); // Debe detenerse en 'a'
    run_test("   -123456789hola", 11);

    // 5. Límites de tipos de datos (Arquitectura de 32 bits vs 64 bits)
    run_test("2147483647", 12);  // INT_MAX
    run_test("-2147483648", 13); // INT_MIN

    // 6. Cadenas vacías o sin números
    run_test("", 14);
    run_test("  -  ", 15);
    run_test("abc", 16);
}


