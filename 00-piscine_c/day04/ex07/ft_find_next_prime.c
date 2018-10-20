/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 18:06:55 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/12 19:13:09 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAXINT	2147483647

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
			result = average;
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

int	ft_is_prime(int nb)
{
	int i;
	int res;
	int limite;

	res = 1;
	limite = ft_sqrt(nb) + 1;
	if (nb == 2)
		return (1);
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0)
		res = 0;
	else
	{
		i = 3;
		while ((i < limite) && (res))
		{
			if (nb % i == 0)
				res = 0;
			i += 2;
		}
	}
	return (res);
}

int	ft_find_next_prime(int nb)
{
	int i;
	int res;
	int rc;

	if (nb <= 1)
		return (2);
	res = -1;
	i = nb;
	while (i <= MAXINT)
	{
		rc = ft_is_prime(i);
		if (rc)
		{
			res = i;
			break ;
		}
		if (i == MAXINT)
			break ;
		i++;
	}
	return (res);
}
