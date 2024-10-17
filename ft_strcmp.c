/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:40:59 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/02 17:56:36 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*
int main()
{
	char first[10], second[10];
	int result = 0;

	printf("Vou precisar de dois números quaisquer.\n");
	printf("Primeiro: ");
	scanf("%s", first);
	printf("Segundo :");
	scanf("%s", second);
	result = ft_strcmp(first, second);
	if (result == 0){
		printf("Parabéns, são iguais!");
	} else {
		printf("Opa, não são iguais. Boboca.");
	}
}
*/
