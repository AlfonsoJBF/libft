#include "tests_libft.h"

void print_split(char **result) {
    if (!result) {
        printf("  - Resultado: NULL\n");
        return;
    }
    printf("  - Resultado: {");
    for (int i = 0; result[i] != NULL; i++) {
        printf("\"%s\"", result[i]);
        if (result[i + 1] != NULL) printf(", ");
    }
    printf("}\n");
}

void free_split(char **result) {
    if (!result) return;
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);
}

void run_test_split(char const *s, char c, int test_num) {
    printf("Test %02d: s = \"%s\", c = '%c'\n", test_num, s, c);
    char **result = ft_split(s, c);
    print_split(result);
    // Aquí podrías añadir asserts manuales para automatizar el PASS/FAIL
    free_split(result);
    printf("------------------------------\n");
}

void test_split(void) {
    printf("=== Iniciando TDD para ft_split ===\n\n");

    // 1. Caso estándar
    run_test_split("hola mundo", ' ', 1);

    // 2. Delimitadores múltiples y al principio/final
    run_test_split("   lorem   ipsum  dolor  ", ' ', 2);

    // 3. Delimitador que no existe en la cadena
    run_test_split("todo-junto-sin-espacios", ' ', 3);

    // 4. Cadena compuesta solo por delimitadores
    run_test_split("xxxxxx", 'x', 4);

    // 5. Cadena vacía
    run_test_split("", 'z', 5);

    // 6. Delimitador nulo (carácter \0)
    run_test_split("comportamiento especial", '\0', 6);

    // 7. Un solo carácter que es el delimitador
    run_test_split("z", 'z', 7);

    // 8. Un solo carácter que NO es el delimitador
    run_test_split("a", 'z', 8);
}
