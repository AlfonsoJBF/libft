#include "tests_libft.h"

#define GREEN "\033[0;32m"
#define RED   "\033[0;31m"
#define RESET "\033[0m"

void	print_result(char *name, int expected, int result)
{
		if ((expected && result) || (!expected && !result))
				printf(GREEN "[OK]   %s\n" RESET, name);
		else
				printf(RED   "[KO]   %s (expected: %d, got: %d)\n" RESET, name, expected, result);
}

void	test_char(char c,
				int exp_isspace,
				int exp_isalpha,
				int exp_isdigit,
				int exp_isalnum,
				int exp_isascii,
				int exp_isprint,
				int exp_tolower,
				int exp_toupper)
{
		printf("\nTesting char: '%c' (%d)\n", c, c);
		print_result("isspace", exp_isspace, ft_isspace(c));
		print_result("isalpha", exp_isalpha, ft_isalpha(c));
		print_result("isdigit", exp_isdigit, ft_isdigit(c));
		print_result("isalnum", exp_isalnum, ft_isalnum(c));
		print_result("isascii", exp_isascii, ft_isascii(c));
		print_result("isprint", exp_isprint, ft_isprint(c));
		print_result("tolower", exp_tolower, ft_tolower(c));
		print_result("toupper", exp_toupper, ft_toupper(c));
}

void	test2(void)
{
		test_char('a', 0, 1, 0, 1, 1, 1, 'a', 'A');
		test_char('A', 0, 1, 0, 1, 1, 1, 'a', 'A');
		test_char('9', 0, 0, 1, 1, 1, 1, '9', '9');
		test_char('.', 0, 0, 0, 0, 1, 1, '.', '.');
		test_char(' ', 1, 0, 0, 0, 1, 1, ' ', ' ');
		test_char('\n', 1, 0, 0, 0, 1, 0, '\n', '\n');
		test_char(164, 0, 0, 0, 0, 0, 0, 164, 164); 
}
