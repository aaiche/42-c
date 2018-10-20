/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 13:34:32 by hdussert          #+#    #+#             */
/*   Updated: 2017/09/10 15:33:13 by hdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_valid_line(char *str);

int		ft_check_nb_indices(char *argv[])
{
	int indices;
	int i;
	int j;

	i = 0;
	j = -1;
	indices = 0;
	while (++i <= 9)
	{
		while (++j < 9)
			if (argv[i][j] != '.')
				indices++;
		j = -1;
	}
	if (indices < 17)
		return (0);
	else
		return (1);
}

int		ft_check_arg(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc != 10)
		return (0);
	else
		while (++i < 10)
			if (!ft_valid_line(argv[i]))
				return (0);
	if (!ft_check_nb_indices(argv))
		return (0);
	return (1);
}
