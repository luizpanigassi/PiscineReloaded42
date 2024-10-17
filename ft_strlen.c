/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:40:51 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/02 17:56:38 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/*
int main ()
{
	char text[99];

	printf("Escreva uma palavra: ");
	scanf("%s", text);
	int result = ft_strlen(text);
	printf("Você escreveu uma palavra com %d caracteres", result);
	return 0;
}
*/
