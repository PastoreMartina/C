/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpastore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:05:25 by mpastore          #+#    #+#             */
/*   Updated: 2024/05/22 09:55:20 by mpastore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int	size = 12;
	int	i;
	ft_rev_int_tab(array, size);
	for (i = 0; i < 12; i++)
		printf("%d, ", array[i]);
}*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*end;

	end = tab + (size - 1);
	while (tab < end)
	{
		ft_swap(tab, end);
		tab++;
		end--;
	}
}
