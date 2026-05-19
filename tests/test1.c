#include "tests_libft.h"

void test1(void)
{
	char frase[] = "   Esto         es una frase de       pruebas          ";
	int words = ft_count_words(frase);
	int len = ft_strlen(frase);
	int expected = 6;
	int expected_char = 55;
	int color;
	if( len == expected_char && words == expected)
		color = 32;
	else
		color = 31;
	printf("\033[32mSe esperan %d palabras en una cadena de %d caracteres\033[0m\n", expected, expected_char);
	printf("\033[%dmSe recibieron %d palabras y %d caracteres\033[0m\n", color, words, len);
}
