/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 00:05:22 by memartin          #+#    #+#             */
/*   Updated: 2019/06/11 01:54:30 by memartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	print_grid(char grid[10][10])
{
	printf(" x0123456789\ny\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", i);
		for (int j = 0; j < 10; j++)
			printf("%c", grid[i][j]);
		printf("\n");
	}
}


int		ft_ten_queens_puzzle(void)
{
	char	g[10][10];
	int		d[10][2];
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			if (y == 0)
				g[y][x] = 'x';
			else 
				g[y][x] = 'o';
			x++;
		}
		y++;
	}
	x = 0;
	y = 9;
	while (y >= 0)
	{
		d[y][0] = 0;
		d[y][1] = x++;
		y--;
	}
	print_grid(g);
	return (0);
}


int main()
{
	ft_ten_queens_puzzle();
	return (0);
}
