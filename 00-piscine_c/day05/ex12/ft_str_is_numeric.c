/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 15:32:58 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/19 17:48:39 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isdigit(char c)
{
	int	rc;

	rc = 0;
	if (c >= '0' && c <= '9')
	{
		rc = 1;
	}
	else
	{
		rc = 0;
	}
	return (rc);
}

int				ft_str_is_numeric(char *str)
{
	int		i;
	int		rc;

	rc = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
		{
			rc = 0;
			break ;
		}
		i++;
	}
	return (rc);
}
