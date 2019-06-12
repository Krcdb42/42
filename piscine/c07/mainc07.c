/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc07.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:07:12 by memartin          #+#    #+#             */
/*   Updated: 2019/06/11 16:58:54 by memartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src);
int *ft_range(int min, int max);

int		get_lengthp(int min, int max)
{
	if (min >= 0)
		return (max - min);
	else if (min < 0 && max < 0)
		return ((-min) - (-max));
	else
		return (max + (-min));
}

int		main(int ac, char **av)
{
	/*
	//strdup
	if (ac > 1)
	{
	printf("s    : {%s}\n", av[1]);
	printf("res o: {%s}\n", strdup(av[1]));
	printf("res f: {%s}\n", ft_strdup(av[1]));
	}
	*/
	int *tab;
	if (ac > 2)
	{
		int min = atoi(av[1]);
		int max = atoi(av[2]);
		printf("min : %d || max : %d\n", min, max);
		printf("length %d\n", get_lengthp(min, max));
		tab = ft_range(min, max);
		printf("tab  : ");
		for(int i = 0; i < get_lengthp(min, max); i++)
				printf("%d", tab[i]);
		printf("\n");
	}		
	return (0);
}
