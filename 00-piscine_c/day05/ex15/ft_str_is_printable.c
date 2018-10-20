/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 15:48:34 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/19 17:49:39 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isprint(char c)
{
	int	rc;

	rc = 0;
	if (c >= 32 && c <= 126)
	{
		rc = 1;
	}
	else
	{
		rc = 0;
	}
	return (rc);
}

int				ft_str_is_printable(char *str)
{
	int		i;
	int		rc;

	rc = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isprint(str[i]))
		{
			rc = 0;
			break ;
		}
		i++;
	}
	return (rc);
}
