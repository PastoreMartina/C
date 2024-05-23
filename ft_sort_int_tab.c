#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int array[] = {3, 5, 1, 8, 9, 0, 2, 7, 4, 6};
	int size = 10;
	int i = 0;
	while (i < size)
        {
                printf("%d, ", array[i]);
                i++;
        }
	printf("\n");
	ft_sort_int_tab(array, size);
	int j = 0;
	while (j < size)
	{
		printf("%d, ", array[j]);
		j++;
	}
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*ext;
	int	*ptr_min;
	int	control;
	int	i;
	int	j;

	ext = tab;
	ptr_min = tab;
	control = size - 1;
	i = 0;
	j = 0;

	while (j < control)
	{
		while (i < size)
		{
			if (tab < ptr_min)
				ptr_min = tab;
			i++;
			tab++;
		}
		tab = tab - control - 1;
		ft_swap(ext, ptr_min);
		ext++;
		j++;
	}
}
