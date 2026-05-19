#include "libft.h"

int	ft_count_words(char *str)
{
	int count = 0;
	int i = 0;
	int in_word = 0;

	while(str[i])
	{
		if(ft_isspace(str[i]) && in_word)
			in_word=0;
		if(ft_isalpha(str[i]) && !in_word)
		{
			count++;
			in_word = 1;
		}
		i++;
	}
	return (count);
}
