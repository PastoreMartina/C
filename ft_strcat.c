#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char s1[16] = "Martina";
	char s2[8] = "Pastore";
	ft_strcat(s1, s2);
	printf("%s.\n", s1);
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	char *output;

	output = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (output);
}


