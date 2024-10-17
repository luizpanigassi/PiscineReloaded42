/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:14:49 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/08 15:25:21 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	arr_size;
	int	*array;
	int	i;
	int	next;

	next = min;
	i = 0;
	if (min >= max)
		return (NULL);
	arr_size = max - min;
	array = malloc(arr_size * sizeof(int));
	if (!array)
		return (NULL);
	while (next < max)
	{
		array[i] = next;
		i++;
		next++;
	}
	return (array);
}
/*
int main()
{
	int min = 0;
	int max = 0;
	int *array;
	int i;

	printf("Me dá um número pra ser o mínimo: ");
	scanf("%d", &min);
	printf("Me dá um número pra ser o máximo: ");
	scanf("%d", &max);

	array = ft_range(min, max);

	if (array == NULL)
	{
		printf("Errrrrrrrrou! Tenta de novo!\n");
	} else
	{
		printf("Olha sua array: ");
		for(i = 0 ; i < (max - min); i++)
		{
			printf("%d", array[i]);
		}
		printf("\n");
		free(array);
	}
	return 0;
}
*/
