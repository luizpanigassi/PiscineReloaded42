/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:40:45 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/08 15:17:35 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
/*
int main()
{
	char mensagem[100];

	printf("Escreve qualquer porcaria:");
	scanf("%99s", mensagem);

	ft_putstr(mensagem);
	printf("\n");

	return 0;
}
*/
