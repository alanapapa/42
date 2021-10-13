/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 02:16:31 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/13 02:56:08 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_index(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 10);
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 10);
	return (-1);
}

int	get_pow(int nb, int power)
{
	int	result;

	result = 1;
	while (power--)
		result *= nb;
	return (result);
}

int	check_base2(char *base)
{
	int	i;
	int	j;

	i = -1;
	if (!base || !base[1])
		return (0);
	while (base[++i])
	{
		if (!((base[i] >= '0' && base[i] <= '9')
				|| (base[i] >= 'a' && base[i] <= 'z')
				|| (base[i] >= 'A' && base[i] <= 'Z')))
			return (0);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (0);
	}
	return (i);
}

void	if_negative(int *i, int *minus, int *bool_minus)
{
	i++;
	*minus = -1;
	*bool_minus = 1;
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	minus;
	int	i;
	int	pow;
	int	base_n;
	int	bool_minus;

	minus = 1;
	bool_minus = 0;
	i = 0;
	if ((base_n = check_base2(base)))
	{
		if (*str == '-')
			if_negative(&i, &minus, &bool_minus);
		while (str[i])
			i++;
		pow = 0;
		n = 0;
		while (--i >= bool_minus)
		{
			if (get_index(str[i] != -1) && get_index(str[i] < base_n))
				n += get_index(str[i]) * get_pow(base_n, pow++);
		}
		return (n * minus);
	}
	return (0);
}
