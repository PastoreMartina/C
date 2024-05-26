#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;

	if (min >= max)
	{
		return NULL;
	}
	size = max - min;
	array = malloc(size * sizeof(int));
	if (array != NULL)
	{
		i = 0;
		while (i < size)
		{
			array[i] = min;
			i++;
			min++;
		}
		return (array);
	}
	return NULL;
}
