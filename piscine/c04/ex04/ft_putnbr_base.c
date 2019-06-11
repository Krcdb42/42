/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:51:24 by memartin          #+#    #+#             */
/*   Updated: 2019/06/10 19:43:14 by memartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_base(char *s, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < len - 2)
	{
		j = i + 1;
		while (j < len - 1)
		{
			if (s[i] == s[j])
				return (0);
			j++;
		}
		i++;
	}
	while (*s)
	{
		if (!((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z') ||
					(*s >= '0' && *s <= '9')))
			return (0);
		s++;
	}
	return (1);
}

int		ft_strlen(char *c)
{
	int len;

	len = 0;
	while (*c++)
		len++;
	return (len);
}

void	ft_putnbr(long nb, char *b, int base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < base)
		ft_putchar(b[nb]);
	else
	{
		ft_putnbr(nb / base, b, base);
		ft_putnbr(nb % base, b, base);
	}
}

void	ft_putnbr_base(int nb, char *base)
{
	int b;

	b = ft_strlen(base);
	if (b < 2)
		return ;
	if (!check_base(base, b))
		return ;
	ft_putnbr(nb, base, b);
}
