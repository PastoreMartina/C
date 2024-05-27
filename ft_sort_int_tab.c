/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpastore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:24:27 by mpastore          #+#    #+#             */
/*   Updated: 2024/05/23 11:24:34 by mpastore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

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
}*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*ptr_min;
	int	round;
	int	step;

	ptr_min = tab;
	step = 0;
	while (step < size -1)
	{
		round = step + 1;
		while (round < size)
		{
			if (tab[round] < *ptr_min)
				ptr_min = &tab[round];
			round++;
		}
		ft_swap(&tab[step], ptr_min);
		step++;
	}
}
