/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 11:21:38 by memartin          #+#    #+#             */
/*   Updated: 2019/06/11 15:28:29 by memartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlen(char *s)
{
	int len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

char			*ft_strdup(char *src)
{
	char *res;
	char *tmp;

	if (!(res = malloc(sizeof(char*) * (ft_strlen(src) + 1))))
		return (NULL);
	tmp = res;
	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';
	return (res);
}
