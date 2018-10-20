/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:45:18 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/09 18:05:07 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	return ;
}

void	ft_display_str_array(char **array)
{
	int	i;

	i = 1;
	while (array[i] != 0)
	{
		ft_putstr(array[i]);
		ft_putchar('\n');
		i++;
	}
	return ;
}

int		ft_strcmp(char *s1, char *s2)
{
	int	diff;

	diff = 0;
	if ((*s1 == '\0') || (*s2 == '\0'))
		diff = (unsigned char)*s1 - (unsigned char)*s2;
	while ((*s1 != '\0') || (*s2 != '\0'))
	{
		diff = (unsigned char)*s1 - (unsigned char)*s2;
		if (diff != 0)
			break ;
		s1++;
		s2++;
	}
	return (diff);
}

int		main(int argc, char **argv)
{
	char	*p;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				p = argv[i];
				argv[i] = argv[j];
				argv[j] = p;
			}
			j++;
		}
		i++;
	}
	ft_display_str_array(argv);
	return (0);
}
