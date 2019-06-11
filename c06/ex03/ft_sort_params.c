/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 02:12:01 by memartin          #+#    #+#             */
/*   Updated: 2019/06/11 02:23:07 by memartin         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_tab(char **tab, int size)
{
	int i;

	i = 0;
	while (++i < size)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
	}
}

int		main(int ac, char **av)
{
	int		i;
	char	*tmp;
	int		size;

	size = ac;
	i = 0;
	while (size > 1)
	{
		i = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				tmp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
	ft_print_tab(av, ac);
	return (0);
}
