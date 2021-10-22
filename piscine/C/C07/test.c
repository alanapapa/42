/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:46:44 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/20 13:46:45 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strdup(char *src);
int *ft_range(int min, int max);
int ft_ultimate_range(int **range, int min, int max);
char *ft_strjoin(int size, char **strs, char *sep);
//char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*ptr;
	int	*tab;

	ptr = ft_strdup("hello");
	printf("-------------------\n");
	printf("ex00\n\n");
	printf("ptr = ft_strdup('hello')\n");
	printf("ptr: %s\n\n", ptr);
	printf("-------------------\n");
        printf("ex01\n\n");
//	printf("*ft_range(15, 10)\n");
//	printf("%d \n", *ft_range(15, 10));
	printf("*ft_range(5, 10);\n");
	tab = ft_range(5, 10);
	for(int i = 0; i < 5; i++)
	        printf("%d", tab[i]);
	printf("\n\n-------------------\n");
        printf("ex02\n\n");
	int	*tab1;
	int	**range;
	range = &tab1;
	printf("ft_ultimate_range(**range, 2, 10)\n");
	printf("return: %d", ft_ultimate_range(range, 2, 10));
	printf("\n\n-------------------\n");
        printf("ex03\n\n");
	char	**words;
	char	word1[] = {"hello"};
	char	word2[] = {"world"};
	char	word3[] = {"!"};
	char	*complex[3];
	complex[0] = word1;
	complex[1] = word2;
	complex[2] = word3;
	words = complex;
	printf("ft_strjoin(3, [[hello], [world], [!]], '-')\n");
	printf("%s", ft_strjoin(3, words, "-"));
	printf("\n\n-------------------\n");
//      printf("ex04\n\n");
//	printf("ft_convert_base('-122', '0123456789', '01')\n");
//	printf("%s", ft_convert_base("-122", "0123456789", "01"));
//	printf("\n\nft_convert_base('-122', '0123456789', '0123456789ABCDEF')\n");
//	printf("%s", ft_convert_base("-122", "0123456789", "0123456789ABCDEF"));
//	printf("\n\n-------------------\n");
}
