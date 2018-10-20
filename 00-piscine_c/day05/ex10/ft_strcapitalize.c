/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 14:25:22 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/19 16:58:37 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_islower(char c)
{
	int	rc;

	rc = 0;
	if (c >= 'a' && c <= 'z')
	{
		rc = 1;
	}
	else
	{
		rc = 0;
	}
	return (rc);
}

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

static char		ft_lowerchar(char c)
{
	char	lower_char;

	lower_char = c + 32;
	return (lower_char);
}

static char		ft_upperchar(char c)
{
	char	upper_char;

	upper_char = c - 32;
	return (upper_char);
}

char			*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (ft_islower(str[i]))
				str[i] = ft_upperchar(str[i]);
		}
		else
		{
			if (ft_islower(str[i]) && \
				((str[i - 1] == ' ') ||
				(str[i - 1] == '+') ||
				(str[i - 1] == '-')))
				str[i] = ft_upperchar(str[i]);
			if ((ft_islower(str[i - 1]) || ft_isupper(str[i - 1])) &&
				(ft_isupper(str[i])))
				str[i] = ft_lowerchar(str[i]);
		}
		i++;
	}
	return (str);
}
