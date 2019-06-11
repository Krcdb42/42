/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 20:57:39 by memartin          #+#    #+#             */
/*   Updated: 2019/06/10 21:02:31 by memartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int res;

	res = nb;
	if (nb == 0)
		return (1);
	res *= ft_recursive_factorial(nb - 1);
	return (res);
}
