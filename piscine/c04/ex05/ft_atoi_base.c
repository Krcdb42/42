/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 19:36:03 by memartin          #+#    #+#             */
/*   Updated: 2019/06/12 18:36:56 by memartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int		is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
			|| c == '\r' || c == ' ')
		return (1);
	else
		return (0);
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

int		base_nb(char c, char *base)
{
	int i;

	i = 0;
	while (i < ft_strlen(base))
	{
		if (c == base[i])
			return (i + 1);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int res;
	int neg;

	res = 0;
	neg = 1;
	if (ft_strlen(base) < 2)
		return (0);
	if (!check_base(base, ft_strlen(base)))
		return (0);
	while (is_space(*str) && *str)
		str++;
	while ((*str == '+' || *str == '-') && *str)
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (base_nb(*str, base) && *str)
	{
		res *= ft_strlen(base);
		res += (base_nb(*str, base) - 1);
		str++;
	}
	res *= neg;
	return (res);
}
