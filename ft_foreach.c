/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:15:35 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/07 16:03:21 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void	ft_putnumber(int n)
{
	char	c;

	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnumber(n / 10);
	}
	c = (n % 10) + '0';

	write(1, &c, 1);
}

int main()
{
	int array[] = {1, 2, 3, 4, 5};
	int length = sizeof(array) / sizeof(array[0]);

	ft_foreach(array, length, ft_putnumber);
	return 0;
}
*/
