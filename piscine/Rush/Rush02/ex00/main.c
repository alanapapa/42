/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:19:26 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/17 18:19:27 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char *argv[])
{
	char	*dictname;

	if (argc > 3)
		write(1, "Too many arguments", 18);
	else if (argc == 2)
	{
		dictname = "numbers.dict";
		validate_and_start(dictname, argv[1]);
	}
	else if (argc == 3)
	{
		dictname = argv[1];
		validate_and_start(dictname, argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
