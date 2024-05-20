/*#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*test1 = "abcd";
	char	*test2 = "abce";
	char	*test3 = "abcd";
	char	*test4 = "aabc";
	printf("%d.\n", ft_strcmp(test1, test2)); //Expected: < 0
	printf("%d.\n", ft_strcmp(test1, test3)); //Expected: = 0
	printf("%d.\n", ft_strcmp(test1, test4)); //Expected: > 0
	return (0);
}*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
