/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfonsojbf <albustos@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 01:40:02 by alfonsojbf        #+#    #+#             */
/*   Updated: 2026/05/13 02:38:33 by alfonsojbf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"
#include <assert.h>

void test_strjoin()
{
	char *res;

	printf("Iniciando batería de tests para ft_strjoin...\n");

	// Test 1: Concatenación estándar
	res = ft_strjoin("Hola ", "mundo");
	assert(res != NULL);
	assert(strcmp(res, "Hola mundo") == 0);
	free(res);
	printf("Test 1 (Estándar): PASADO\n");

	// Test 2: Primera cadena vacía
	res = ft_strjoin("", "42");
	assert(res != NULL);
	assert(strcmp(res, "42") == 0);
	free(res);
	printf("Test 2 (S1 vacía): PASADO\n");

	// Test 3: Segunda cadena vacía
	res = ft_strjoin("C-Language", "");
	assert(res != NULL);
	assert(strcmp(res, "C-Language") == 0);
	free(res);
	printf("Test 3 (S2 vacía): PASADO\n");

	// Test 4: Ambas cadenas vacías (debe retornar cadena vacía, no NULL)
	res = ft_strjoin("", "");
	assert(res != NULL);
	assert(strlen(res) == 0);
	free(res);
	printf("Test 4 (Ambas vacías): PASADO\n");

	// Test 5: Caso extremo - Caracteres especiales o largos
	res = ft_strjoin("Deep\0Learning", "Test"); 
	// Nota: strjoin debería detenerse en el primer \0
	assert(res != NULL);
	assert(strcmp(res, "DeepTest") == 0);
	free(res);
	printf("Test 5 (Corte por \\0): PASADO\n");

	// Test 6: Manejo de seguridad (S1 es NULL)
	// Dependiendo de tu especificación, esto podría retornar NULL o un duplicado de S2.
	// Ajusta este test según lo que dicte tu manual.
	res = ft_strjoin(NULL, "S2");
	assert(res == NULL); 
	printf("Test 6 (S1 es NULL): PASADO\n");

	// Test 7: Manejo de seguridad (S2 es NULL)
	res = ft_strjoin("S1", NULL);
	assert(res == NULL);
	printf("Test 7 (S2 es NULL): PASADO\n");

	printf("\n¡Todos los tests han pasado con éxito!\n");
}
