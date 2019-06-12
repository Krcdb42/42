/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:38:42 by memartin          #+#    #+#             */
/*   Updated: 2019/06/11 17:01:36 by memartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int		get_length(int min, int max)
{
	if (min >= 0)
		return (max - min);
	else if (min < 0 && max < 0)
		return ((-min) - (-max));
	else
		return (max + (-min));
}


int		*ft_range(int min, int max)
{
	int *res;
	int	length;
	int i;
	int *tmp;

	i = min;
	if (min >= max)
		return (NULL);
	length = get_length(min, max);
	if (!(res = malloc(sizeof(int*) * length)))
		return (NULL);
	tmp = res;
	while (i < max)
	{
		printf("i :  %d
		*tmp = i++;
	return (res);
}
