/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:52:47 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/09 17:54:35 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int index;
	int c;

	index = 0;
	c = 1;
	while (str[index] != '\0')
	{
		c++;
		index++;
	}
	return (c);
}

int		main()
{
	char str1[] = "Hello";
	ft_strlen(str1);
	return (0);
}
