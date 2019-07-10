/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 13:10:24 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/10 13:20:42 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int index;
	int n;
	int c;

	index = 0;
	c = 0;
	while (index < size)
	{
		n = index + 1;
		while (n < size)
		{
			if (tab[index] > tab[n])
			{
				c = tab[n];
				tab[n] = tab[index];
				tab[index] = c;
			}
			n++;
		}
		index++;
	}
}

int		main(void)
{
	int tab[] = {2, 1, 5, 0, 5, 8, 3};
	int size = 7;

	ft_sort_int_tab(tab, size);
	return 0;
}
