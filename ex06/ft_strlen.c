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
	
	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

int		main()
{
	char str1[] = "Hello";
	ft_strlen(str1);
	return (0);
}
