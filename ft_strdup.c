#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int	len;
	char	*copy;
	char	*output;

	len = 0;
	while (str[len])
		len++;
	copy = malloc((len + 1) * sizeof(char));
	if (copy != NULL)
	{
		output = copy;
		while (*str)
		{
			*copy = *str;
			copy++;
			str++;
		}
		*copy = '\0';
		return (output);
	}
	return ((char *)0);;
}
