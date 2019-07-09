/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:24:53 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/09 10:32:19 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int e;

	e = *a;
	*a = e / *b;
	*b = e % *b;
}

int		main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	a = &c;
	b = &d;
	c = 20;
	d = 3;
	ft_ultimate_div_mod(a, b);
	return (0);
}
