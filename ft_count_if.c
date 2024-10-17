/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:15:50 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/08 14:59:47 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]))
		{
			count++;
		}
		i++;
	}
	return (count);
}

/*
int teste (char *str)
{
	return (str && str[0] != '\0');
}

int main()
{
	char *tab[] = {"oi", "seus", "putos", NULL};
	int count = ft_count_if(tab, teste);
	printf("Deu: %d\n", count);
	return 0;
}
*/
