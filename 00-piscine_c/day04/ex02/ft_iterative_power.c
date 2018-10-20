/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:14:55 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/10 12:30:30 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int res;

	if (!power)
		return (1);
	if (power < 0)
		return (0);
	res = 1;
	i = 1;
	while (i <= power)
	{
		res = nb * res;
		i++;
	}
	return (res);
}
