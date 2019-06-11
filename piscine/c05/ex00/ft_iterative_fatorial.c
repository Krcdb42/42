/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_fatorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 20:23:18 by memartin          #+#    #+#             */
/*   Updated: 2019/06/10 20:29:36 by memartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;
	int i;

	i = 1;
	res = 1;
	if (nb == 0)
		return (res);
	while (i <= nb)
		res *= i++;
	return (res);
}
