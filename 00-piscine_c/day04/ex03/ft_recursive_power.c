/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:41:56 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/10 13:00:54 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int res;

	if (!power)
		return (1);
	if (power < 0)
		return (0);
	res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
