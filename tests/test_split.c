#include "tests_libft.h"

static void print_split(char **result)
{
    if (!result)
    {
        printf("  - Resultado: NULL\n");
        return;
    }
    printf("  - Resultado: {");
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("\"%s\"", result[i]);
        if (result[i + 1] != NULL)
            printf(", ");
    }
    printf("}\n");
}

static void free_split(char **result)
{
    int i;

    if (!result)
        return;
    i = 0;
    while (result[i] != NULL)
    {
        free(result[i]);
        i++;
    }
    free(result);
}

static int compare_split(char **result, const char *expected[])
{
    int i;

    if (!result)
        return (expected == NULL);
    i = 0;
    while (result[i] != NULL || expected[i] != NULL)
    {
        if (!result[i] || !expected[i])
            return (0);
        if (strcmp(result[i], expected[i]) != 0)
            return (0);
        i++;
    }
    return (1);
}

static int run_test_split(const char *s, char c, const char *expected[], int test_num)
{
    char **result;
    int success;
    int i;

    printf("Test %02d: s = \"%s\", c = '%c'\n", test_num, s, c);
    result = ft_split(s, c);
    print_split(result);
    printf("  - Esperado: {");
    i = 0;
    while (expected && expected[i] != NULL)
    {
        printf("\"%s\"", expected[i]);
        if (expected[i + 1] != NULL)
            printf(", ");
        i++;
    }
    printf("}\n");
    success = compare_split(result, expected);
    if (success)
        printf(GREEN "  - Resultado: OK\n" RESET);
    else
        printf(RED "  - Resultado: KO\n" RESET);
    printf("------------------------------\n");
    free_split(result);
    return (success);
}

void test_split(void)
{
    int passed = 0;
    int total = 8;
    static const char *expected1[] = {"hola", "mundo", NULL};
    static const char *expected2[] = {"lorem", "ipsum", "dolor", NULL};
    static const char *expected3[] = {"todo-junto-sin-espacios", NULL};
    static const char *expected4[] = {NULL};
    static const char *expected5[] = {NULL};
    static const char *expected6[] = {"comportamiento especial", NULL};
    static const char *expected7[] = {NULL};
    static const char *expected8[] = {"a", NULL};

    printf("--- INICIANDO BATERÍA DE TESTS PARA FT_SPLIT ---\n\n");
    passed += run_test_split("hola mundo", ' ', expected1, 1);
    passed += run_test_split("   lorem   ipsum  dolor  ", ' ', expected2, 2);
    passed += run_test_split("todo-junto-sin-espacios", ' ', expected3, 3);
    passed += run_test_split("xxxxxx", 'x', expected4, 4);
    passed += run_test_split("", 'z', expected5, 5);
    passed += run_test_split("comportamiento especial", '\0', expected6, 6);
    passed += run_test_split("z", 'z', expected7, 7);
    passed += run_test_split("a", 'z', expected8, 8);

    printf("\n--- RESULTADO FINAL FT_SPLIT: %d/%d ---\n\n", passed, total);
}
