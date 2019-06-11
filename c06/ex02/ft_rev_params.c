/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 02:09:36 by memartin          #+#    #+#             */
/*   Updated: 2019/06/11 02:10:45 by memartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, &*s++, 1);
}

int		main(int ac, char **av)
{
	int i;

	i = ac;
	while (--i > 0)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
	return (0);
}
