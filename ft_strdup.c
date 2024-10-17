/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:14:33 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/02 17:55:50 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*copy;
	size_t	str_length;
	size_t	i;

	i = 0;
	str_length = ft_strlen(src);
	copy = (char *)malloc(str_length + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	while (i < str_length)
	{
		copy[i] = src[i];
		i++;
	}
	copy[str_length] = '\0';
	return (copy);
}
/*
int main()
{
	char original[100];
	char *duplicate;

	printf("Digita alguma coisa: ");
	scanf("%99s", original);

	duplicate = ft_strdup(original);

	if(duplicate != NULL)
	{
		printf("Toma sua cópia: %s\n", duplicate);
		free(duplicate);
	} else {
		printf("Deu algum xabú aqui");
	}

	return 0;
}
*/
