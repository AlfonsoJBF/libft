#include "tests_libft.h"

static int run_test(const char *input, int expected_words, int expected_len, int test_num)
{
	char buffer[256];
	int i;
	int words;
	int len;
	int success;

	i = 0;
	while (input[i] != '\0' && i < (int)sizeof(buffer) - 1)
	{
		buffer[i] = input[i];
		i++;
	}
	buffer[i] = '\0';

	words = ft_count_words(buffer);
	len = ft_strlen(buffer);
	success = (words == expected_words && len == expected_len);

	printf("Test %02d: \"%s\"\n", test_num, input);
	printf("  - Esperado: palabras=%d, longitud=%d\n", expected_words, expected_len);
	printf("  - Obtenido: palabras=%d, longitud=%d\n", words, len);
	if (success)
		printf(GREEN "  - Resultado: OK\n" RESET);
	else
		printf(RED "  - Resultado: KO\n" RESET);
	printf("------------------------------\n");
	return (success);
}

void test_count_words(void)
{
	int passed = 0;
	int total = 4;

	printf("--- INICIANDO BATERÍA DE TESTS PARA FT_COUNT_WORDS ---\n\n");

	passed += run_test("   Esto         es una frase de       pruebas          ", 6, 55, 1);
	passed += run_test("hola mundo", 2, 10, 2);
	passed += run_test("   uno   dos   tres   ", 3, 22, 3);
	passed += run_test("", 0, 0, 4);

	printf("\n--- RESULTADO FINAL FT_COUNT_WORDS: %d/%d ---\n\n", passed, total);
}
