/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:13:17 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/02 17:57:08 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	result;

	result = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (result * result <= nb)
	{
		if (result * result == nb)
		{
			return (result);
		}
		result++;
	}
	return (0);
}
/*
int	main(void)
{
	int	number;
	int	sq_root;

	number = 0;
	printf("Me dá um número: ");
	scanf("%d", &number);
	sq_root = ft_sqrt(number);
	if (sq_root == 0 && number != 0){
		printf("Olha, não rolou uma raiz quadradada exata, hein.");
	} else if (number == 0) {
		printf("Zero não, né mané.");
	} else {
		printf("A raiz quadrada do seu número é %d", sq_root);
	}

	return (0);
}
*/
