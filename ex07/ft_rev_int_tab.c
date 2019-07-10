/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 22:06:33 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/09 22:13:17 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int c;

	index = 0;
	c = 0;
	while (index < (size / 2))
	{
		c = tab[index];
		tab[index] = tab[size -1 -index];
		tab[size -1 -index] = c;
		index++;
	}
}

int		main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5};
	int size = 6;

	ft_rev_int_tab(tab, size);
	return (0);
}
