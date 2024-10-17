/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:40:01 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/08 15:15:02 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main()
{
	int a = 42;
	int b = 24;

	printf("a Antes: %d\n", a);
	printf("b Antes: %d\n", b);
	ft_swap(&a, &b);
	printf("a Depois: %d\n", a);
	printf("b Depois: %d\n", b);
}
*/
