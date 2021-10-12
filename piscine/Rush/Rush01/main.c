/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:41:39 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/11 14:02:32 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_error(void);
void	check_count_and_start(char *str[]);

int	main(int argc, char *argv[])
{
	if (argc == 2)
		check_count_and_start(&argv[1]);
	else
		write_error();
	return ('0');
}
