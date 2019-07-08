/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 22:50:22 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/08 23:51:06 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 12;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	return (0);
}
