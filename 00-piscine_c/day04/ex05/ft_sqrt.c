/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 15:16:26 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/11 15:56:46 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_floor_root_square(int x)
{
	int low_boundary;
	int high_boundary;
	int average;
	int result;

	low_boundary = 1;
	high_boundary = x;
	if (x > 46340)
		high_boundary = 46340;
	average = 1;
	while (low_boundary <= high_boundary)
	{
		average = (low_boundary + high_boundary) / 2;
		if (average * average == x)
			return (average);
		if (average * average < x)
		{
			low_boundary = average + 1;
			result = 0;
		}
		else
			high_boundary = average - 1;
	}
	return (result);
}

int	ft_sqrt(int x)
{
	int result;

	if (x <= 0)
		return (0);
	if (x == 1)
		return (x);
	result = my_floor_root_square(x);
	return (result);
}
