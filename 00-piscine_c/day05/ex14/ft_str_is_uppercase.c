/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 15:43:27 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/19 17:49:21 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isupper(char c)
{
	int	rc;

	rc = 0;
	if (c >= 'A' && c <= 'Z')
	{
		rc = 1;
	}
	else
	{
		rc = 0;
	}
	return (rc);
}

int				ft_str_is_uppercase(char *str)
{
	int		i;
	int		rc;

	rc = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isupper(str[i]))
		{
			rc = 0;
			break ;
		}
		i++;
	}
	return (rc);
}
