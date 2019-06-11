/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 23:08:14 by memartin          #+#    #+#             */
/*   Updated: 2019/06/10 23:47:33 by memartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if (!(nb % 2))
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int next;

	next = nb;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
