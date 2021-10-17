/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:27:27 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/17 18:30:34 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	dict_handler(unsigned int index, char *dict)
{
	FILE			*file;
	unsigned int	i;
	unsigned int	max;

	struct dic {unsigned int index; char value[100];};
	struct dic *word = (struct dic*)malloc(sizeof(struct dic));
	file = fopen((dict), "r");
	if (file == NULL)
	{
		write(1, "Dict Error\n", 11);
		exit (1);
	}
	i = 0;
	max = 0;
	while ((max <= 4294967295) && (fscanf(file, " %d: %s",
		&word[i].index, word[i].value) == 2))
	{
		i++;
		max++;
	}

	i = 0;
	while (i < max)
	{
		if (word[i].index == index)
			write(1, &word[i].value, get_len(word[i].value));
		i++;
	}
	write(1, " ", 1);
	fclose(file);
	free(word);
}
