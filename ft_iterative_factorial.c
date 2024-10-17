/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:12:39 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/08 14:59:47 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (i <= nb)
	{
		if (result > INT_MAX / i)
		{
			return (0);
		}
		result *= i;
		i++;
	}
	return (result);
}

/*
int main()
{
	int number;

	printf("Digite um número: ");
	scanf("%d", &number);

	int factorial = ft_iterative_factorial(number);

	if (factorial == -1)
	{
		printf("Deu erro aqui, mané. Sinto muito.");
	}
	else
	{
		printf("Seu fatorial deu: %d", factorial);
	}
	return 0;
}
*/
