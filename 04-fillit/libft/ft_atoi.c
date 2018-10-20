/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 13:04:27 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/29 18:49:41 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_issign(char **pp, int *p_sign)
{
	char	*p;
	int		sign;

	p = *pp;
	sign = *p_sign;
	if ((*p == '+') || (*p == '-'))
	{
		if (*p == '-')
			sign = -1;
		p++;
	}
	*pp = p;
	*p_sign = sign;
	return ;
}

static int	ft_check_for_long_bnoundaries(unsigned long *p_out, int *p_sign)
{
	unsigned long	out;
	int				sign;
	int				rc;

	out = *p_out;
	sign = *p_sign;
	rc = 99;
	if (out > 9223372036854775807)
	{
		if (sign == 1)
			rc = -1;
		else
			rc = 0;
	}
	return (rc);
}

int			ft_atoi(const char *str)
{
	char			*p;
	int				sign;
	unsigned long	output_int;
	int				rc_long;

	p = (char *)str;
	sign = 1;
	output_int = 0;
	while ((*p <= ' ') || (*p >= '~'))
	{
		if (!(((*p >= 9) && (*p <= 13)) || *p == ' '))
			return (0);
		p++;
	}
	ft_issign(&p, &sign);
	while ((*p >= '0') && (*p <= '9'))
	{
		output_int = output_int * 10 + (*p - '0');
		p++;
	}
	rc_long = ft_check_for_long_bnoundaries(&output_int, &sign);
	if ((rc_long == -1) || (rc_long == 0))
		return (rc_long);
	output_int = output_int * sign;
	return ((int)output_int);
}
