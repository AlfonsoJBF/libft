/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfonsojbf <albustos@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:44:45 by alfonsojbf        #+#    #+#             */
/*   Updated: 2026/05/12 18:51:59 by alfonsojbf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void run_test(int n, const char *expected, int test_num) {
    char *result = ft_itoa(n);
    
    if (!result) {
        printf("Test %d [n = %d]: FALLIDO (Retornó NULL)\n", test_num, n);
        return;
    }
    
    if (strcmp(result, expected) == 0) {
        printf("Test %d [n = %d]: PASADO (\"%s\")\n", test_num, n, result);
    } else {
        printf("Test %d [n = %d]: FALLIDO (Esperado \"%s\", obtenido \"%s\")\n", 
                test_num, n, expected, result);
    }
    
    free(result); // Es fundamental liberar la memoria reservada por ft_itoa
}

void test_itoa(void) {
    printf("=== Suite de Pruebas para ft_itoa ===\n");

    // Casos Base
    run_test(0, "0", 1);
    run_test(5, "5", 2);
    run_test(-5, "-5", 3);

    // Casos de múltiples dígitos
    run_test(42, "42", 4);
    run_test(-42, "-42", 5);
    run_test(100, "100", 6);
    run_test(1001, "1001", 7);

    // Casos Extremis (Límites de int)
    run_test(2147483647, "2147483647", 8); // INT_MAX
    
    /* El caso INT_MIN es el más complejo. 
       Su valor absoluto (2147483648) no cabe en un int estándar de 32 bits.
    */
    run_test(-2147483648, "-2147483648", 9); // INT_MIN

    printf("=== Fin de las pruebas ===\n");
}
