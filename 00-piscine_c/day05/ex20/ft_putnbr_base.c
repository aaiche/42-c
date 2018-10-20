/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 18:10:10 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/18 15:45:37 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_convert_to_base_array(int nbr, char *tab, int base_len, char *base);
int		ft_convert_to_binary_array(int nbr, char *tab, int size);
int		ft_convert_bin_to_octal(char *d, char *tab, char *t);

int		ft_putchar(char c);

void			ft_putnbr(int nb)
{
	long	nb_long;
	int		nb_tenth;
	int		nb_modulo_ten;

	nb_long = (long)nb;
	if (nb_long < 0)
	{
		nb_long *= -1;
		ft_putchar('-');
	}
	if (nb_long <= 9)
	{
		ft_putchar(nb_long + '0');
	}
	else
	{
		nb_tenth = nb_long / 10;
		nb_modulo_ten = nb_long % 10;
		ft_putnbr(nb_tenth);
		ft_putchar(nb_modulo_ten + '0');
	}
	return ;
}

unsigned int	ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
	{
		p++;
	}
	return (p - str);
}

int		ft_check_all_bases(char *in_base, char *chars_to_search)
{
	int	i;
	int	j;
	int num_chars_found;
	int num_chars_of_base;

	num_chars_of_base = ft_strlen(in_base);
	num_chars_found = 0;
	printf("base=%s - num=%d\n", in_base, num_chars_of_base);
	i = 0;
	while (i < num_chars_of_base)
	{
		j = 0;
		while (j < num_chars_of_base)
		{
			if (in_base[j] == chars_to_search[i])
			{
				num_chars_found++;
				break ;
			}
			j++;
		}
		i++;
	}
	printf("num_chars_found = %d\n", num_chars_found);
	return (num_chars_found);
}

int				ft_check_base(char *base)
{
	unsigned int	base_len;
	int				num_chars_found;

	num_chars_found = 1;
	base_len = ft_strlen(base);
	printf("len_base=%d -- base=%s\n", base_len, base);
	if (base_len == 16)
		num_chars_found = ft_check_all_bases(base, "0123456789ABCDEF");
	if (base_len == 10)
		num_chars_found = ft_check_all_bases(base, "0123456789");
	if (base_len == 8)
		num_chars_found = ft_check_all_bases(base, "poneyvif");
	if (base_len == 2)
		num_chars_found = ft_check_all_bases(base, "01");
	return (num_chars_found);
}

void			display_tab(char *tab, int size)
{
	int	i;

	printf("display_tab(): size=%d\n", size);
	i = size - 1;
	while (i >= 0)
	{
		printf("%c", tab[i]);
		i--;
	}
	printf("\n");
	return ;
}

int				ft_convert_bin_to_hex(char *digits, char *bin_tab, char *tab)
{
	int		i;
	int		j;
	int		digit;
	char	bin_to_dec;

	i = 0;
	j = 0;
	while (i < 32)
	{
		bin_to_dec = (bin_tab[i] - '0') * 1 + (bin_tab[i + 1] - '0') * 2 + \
			(bin_tab[i + 2] - '0') * 4 + (bin_tab[i + 3] - '0') * 8;
		digit = digits[bin_to_dec];
		printf("-- %c\n", digit);
		tab[j] = digit;
		i = i + 4;
		j++;
	}
	return (0);
}

int				ft_convert_bin_to_octal(char *digits, char *bin_tab, char *tab)
{
	int		i, j;
	int		digit;
	char	bin_to_dec;

	i = 0;
	j = 0;
	while (i < 32)
	{
		if (i == 27)
		{
			bin_to_dec = (bin_tab[i] - '0') * 1 + (bin_tab[i + 1] - '0') * 2;
		}
		else
		{
			bin_to_dec = (bin_tab[i] - '0') * 1 + (bin_tab[i + 1] - '0') * 2 + \
				(bin_tab[i + 2] - '0') * 4;
		}
		digit = digits[bin_to_dec];
		printf("-- %c\n", digit);
		tab[j] = digit;
		i = i + 3;
		j++;
	}
	return (0);
}

unsigned int	flip_bits(char *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] == '1')
			tab[i] = '0';
		else
		{
			if (tab[i] == '0')
				tab[i] = '1';
			else
				tab[i] = 'z';
		}
		i++;
	}
	return (0);
}

void			init_tab(char *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		tab[i] = '0';
		i++;
	}
	return ;
}

int				ft_convert_to_binary_array(int nbr, char *tab, int size)
{
	long	nbr_mod_two;
	int		i;
	char	*binary_digits;
	int		binary_digit;

	binary_digits = "01";
	nbr_mod_two = 0;
	init_tab(tab, 32);
	if (nbr >= 0)
	{
		i = 0;
		while (nbr > 0)
		{
			nbr_mod_two = nbr % 2;
			binary_digit = binary_digits[nbr_mod_two];
			tab[i] = binary_digits[nbr_mod_two];
			printf("i=%d -- nbr=%d ---- nbr/2 = %d -- nbr_mod_two=%ld -- binary_digit=%c\n", i, nbr, nbr/2, nbr_mod_two, binary_digit);
			nbr = nbr / 2;
			i++;
		}
	}
	else
	{
		nbr *= -1;
		nbr -= 1;
		ft_convert_to_binary_array(nbr, tab, size);
		flip_bits(tab, 32);
	}
	return (0);
}

int				ft_convert_to_base_array(int nbr, char *tab, int base_len, char *base)
{
	long	nbr_mod;
	int		i;
	char	*digits;
	int		digit;
	char	bin_tab[32];

	digits = base;
	nbr_mod = 0;
	init_tab(tab, 8);
	if (nbr >= 0)
	{
		i = 0;
		while (nbr > 0)
		{
			nbr_mod = nbr % base_len;
			digit = digits[nbr_mod];
			tab[i] = digit;
			nbr = nbr / base_len;
			i++;
		}
	}
	else
	{
		ft_convert_to_binary_array(nbr, bin_tab, 32);
		if (base_len == 16)
			ft_convert_bin_to_hex(digits, bin_tab, tab);
		if (base_len == 8)
			ft_convert_bin_to_octal(digits, bin_tab, tab);
	}
	return (0);
}

void			ft_putnbr_base(int nbr, char *base)
{
	int		base_num;
	char	octal_tab[32];
	char	hex_tab[32];
	char	binary_tab[32];

	printf("nbr=%d -- base=%s\n", nbr, base);
	base_num = ft_check_base(base);
	if (!((base_num == 2) || (base_num == 8) ||\
			(base_num == 10) || (base_num == 16)))
	{
		printf("ft_putnbr_base()  ne doit rien n afficher!!\n");
		return ;
	}
	if (base_num == 2)
	{
		ft_convert_to_binary_array(nbr, binary_tab, 32);
		display_tab(binary_tab, 32);
	}
	if (base_num == 16)
	{
		ft_convert_to_base_array(nbr, hex_tab, 16, "0123456789ABCDEF");
		display_tab(hex_tab, 8);
	}
	if (base_num == 8)
	{
		ft_convert_to_base_array(nbr, octal_tab, 8, "01234567");
		display_tab(octal_tab, 11);
	}
	if (base_num == 10)
	{
		printf("ft_convert_to_dec(): nbr=%d\n", nbr);
		ft_putnbr(nbr);
		printf("\n");
	}
	return ;
}
