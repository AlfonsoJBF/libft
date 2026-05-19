#include "tests_libft.h"

static int run_test(char c,
			int exp_isspace,
			int exp_isalpha,
			int exp_isdigit,
			int exp_isalnum,
			int exp_isascii,
			int exp_isprint,
			int exp_tolower,
			int exp_toupper,
			int test_num)
{
	int passed = 1;

	printf("Test %02d: char='%c' (%d)\n", test_num, c, c);
	if (ft_isspace(c) != exp_isspace)
		passed = 0, printf(RED "  - isspace: KO (esperado=%d, obtenido=%d)\n" RESET, exp_isspace, ft_isspace(c));
	else
		printf(GREEN "  - isspace: OK\n" RESET);
	if (ft_isalpha(c) != exp_isalpha)
		passed = 0, printf(RED "  - isalpha: KO (esperado=%d, obtenido=%d)\n" RESET, exp_isalpha, ft_isalpha(c));
	else
		printf(GREEN "  - isalpha: OK\n" RESET);
	if (ft_isdigit(c) != exp_isdigit)
		passed = 0, printf(RED "  - isdigit: KO (esperado=%d, obtenido=%d)\n" RESET, exp_isdigit, ft_isdigit(c));
	else
		printf(GREEN "  - isdigit: OK\n" RESET);
	if (ft_isalnum(c) != exp_isalnum)
		passed = 0, printf(RED "  - isalnum: KO (esperado=%d, obtenido=%d)\n" RESET, exp_isalnum, ft_isalnum(c));
	else
		printf(GREEN "  - isalnum: OK\n" RESET);
	if (ft_isascii(c) != exp_isascii)
		passed = 0, printf(RED "  - isascii: KO (esperado=%d, obtenido=%d)\n" RESET, exp_isascii, ft_isascii(c));
	else
		printf(GREEN "  - isascii: OK\n" RESET);
	if (ft_isprint(c) != exp_isprint)
		passed = 0, printf(RED "  - isprint: KO (esperado=%d, obtenido=%d)\n" RESET, exp_isprint, ft_isprint(c));
	else
		printf(GREEN "  - isprint: OK\n" RESET);
	if (ft_tolower(c) != exp_tolower)
		passed = 0, printf(RED "  - tolower: KO (esperado=%d, obtenido=%d)\n" RESET, exp_tolower, ft_tolower(c));
	else
		printf(GREEN "  - tolower: OK\n" RESET);
	if (ft_toupper(c) != exp_toupper)
		passed = 0, printf(RED "  - toupper: KO (esperado=%d, obtenido=%d)\n" RESET, exp_toupper, ft_toupper(c));
	else
		printf(GREEN "  - toupper: OK\n" RESET);
	printf("------------------------------\n");
	return (passed);
}

void test_char_classification(void)
{
	int passed = 0;
	int total = 6;

	printf("--- INICIANDO BATERÍA DE TESTS PARA FT_CHAR_CLASSIFICATION ---\n\n");
	passed += run_test('a', 0, 1, 0, 1, 1, 1, 'a', 'A', 1);
	passed += run_test('A', 0, 1, 0, 1, 1, 1, 'a', 'A', 2);
	passed += run_test('9', 0, 0, 1, 1, 1, 1, '9', '9', 3);
	passed += run_test('.', 0, 0, 0, 0, 1, 1, '.', '.', 4);
	passed += run_test(' ', 1, 0, 0, 0, 1, 1, ' ', ' ', 5);
	passed += run_test('\n', 1, 0, 0, 0, 1, 0, '\n', '\n', 6);

	printf("\n--- RESULTADO FINAL FT_CHAR_CLASSIFICATION: %d/%d ---\n\n", passed, total);
}