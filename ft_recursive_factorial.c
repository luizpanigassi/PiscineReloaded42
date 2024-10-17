/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:13:07 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/01 18:30:45 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main()
{
	int number;

	printf("Digite um número: ");
	scanf("%d", &number);

	int factorial = ft_recursive_factorial(number);

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
