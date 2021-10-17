/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:27:13 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/17 18:27:14 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	dict_handler(unsigned int index, char *dict);

void	get_digit(unsigned int n, char *dict)
{
	if (n != 0)
		dict_handler(n, dict);
}

void	get_tenth(unsigned int n, char *dict)
{
	if (((n / 10) * 10 != 0) && (n > 19))
		dict_handler(((n / 10) * 10), dict);
	if (((n / 10) * 10 != 0) && (n < 20 && n > 9))
		dict_handler((n % 100), dict);
	else
		get_digit((n % 10), dict);
}

void	get_hundred(unsigned int n, char *dict)
{
	if (n / 100 != 0)
	{
		dict_handler((n / 100), dict);
		dict_handler((100), dict);
	}
	get_tenth((n % 100), dict);
}

void	get_thousand(unsigned int n, char *dict)
{
	get_hundred((n / 1000), dict);
	dict_handler((1000), dict);
	get_hundred((n % 1000), dict);
}

void	get_million(unsigned int n, char *dict)
{
	get_hundred((n / 1000000), dict);
	dict_handler((1000000), dict);
	get_thousand((n % 1000000), dict);
}

void	get_billion(unsigned int n, char *dict)
{
	dict_handler((n / 1000000000), dict);
	dict_handler((1000000000), dict);
	get_million((n % 1000000000), dict);
}

void	get_value(char *dict, unsigned int n)
{
	char	c;

	c = dict[0];
	if (n == 0)
		dict_handler((0), dict);
	else if (n > 999999999 && n <= 4294967295)
		get_billion(n, dict);
	else if (n > 999999 && n < 999999999)
		get_million(n, dict);
	else if (n > 999 && n < 1000000)
		get_thousand(n, dict);
	else if (n > 99 && n < 1000)
		get_hundred(n, dict);
	else if (n > 9 && n < 100)
		get_tenth(n, dict);
	else if (n >= 0 && n < 10)
		get_digit(n, dict);
	else
		write(1, "error\n", 6);
}
