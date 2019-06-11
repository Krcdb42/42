/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 02:00:03 by memartin          #+#    #+#             */
/*   Updated: 2019/06/11 02:03:19 by memartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s)
		write(1, &*s++, 1);
}

int		main(int ac, char **av)
{
	ft_putstr(av[0]);
	write(1, "\n", 1);
	return (0);
}
