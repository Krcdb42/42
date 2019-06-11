/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:31:20 by memartin          #+#    #+#             */
/*   Updated: 2019/06/10 19:51:39 by memartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
			|| c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int res;
	int neg;
	
	res = 0;
	neg = 1;
	while (is_space(*str) && *str)
		str++;
	while ((*str == '+' || *str == '-') && *str)
	{			
		if (*str == '-')
			neg *= -1;		
		str++;
	}
	while ((*str >= '0' && *str <= '9') && *str)
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	res *= neg;
	return (res);
}
