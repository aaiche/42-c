/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 18:19:40 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/09 19:36:29 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	char	*p;
	int		found_a_number;
	int		sign;
	int		output_int;

	p = str;
	found_a_number = 0;
	sign = 1;
	output_int = 0;
	if (*p == 8)
		return (0);
	while (*p <= ' ' || *p >= '~')
		p++;
	if (*p == '+' || *p == '-')
	{
		if (*p == '-')
			sign = -1;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		output_int = output_int * 10 + ((*p - '0') * sign);
		p++;
	}
	return (output_int);
}
