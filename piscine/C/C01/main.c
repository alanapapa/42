/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanapapa <alanapapa@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:49:07 by alanapapa         #+#    #+#             */
/*   Updated: 2021/10/05 22:49:08 by alanapapa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	ex00;
	int	ex01;
	int	*ptr1;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;
	int	*********ptr9;
	int	ex02a;
	int	ex02b;
	int	ex03a;
	int	ex03b;
	int	*div;
	int	*mod;
	int	divv;
	int	modv;
	int	ex04a;
	int	ex04b;
	char	str[] = {"hello"};
	int	ex06;
	int	i;
	int	tab[] = {1, 2, 3, 4, 5, 6};
	int	tab2[] = {2, 1, 4, 6, 5, 3};

/* ex00 */
	ex00 = 1;
	printf("--------------------------");
	printf("\ntest ex00: void ft_ft(int *nbr);\n\n");
	printf("\nex00: %d\n", ex00);
	ft_ft(&ex00);
	printf("\nft_ft(&ex00)\n\nex00: %d\n\n", ex00);
/* ex01 */
	printf("--------------------------");
	printf("\ntest ex01: void ft_ultimate_ft(int *********nbr);\n\n");
	ex01 = 1;
	ptr1 = &ex01;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	printf("\nex01: %d\n\n", ex01);
	printf("ft_ultimate_ft(ptr9);\n");
	ft_ultimate_ft(ptr9);
	printf("\nex01: %d\n\n", ex01);
	printf("--------------------------");
/* ex02 */
	printf("\ntest ex02: void ft_swap(int *a, int *b);\n\n\n");
	ex02a = 2;
	ex02b = 4;
	printf("ex02a: %d, ex02b: %d\n\n", ex02a, ex02b);
	printf("ft_swap(&ex02a, &ex02b);\n\n");
	ft_swap(&ex02a, &ex02b);
	printf("ex02a: %d, ex02b: %d\n\n", ex02a, ex02b);
	printf("--------------------------");
/* ex03 */
	printf("\ntest ex03: void ft_div_mod(int a, int b, int *div, int *mod);\n\n\n");
	ex03a = 42;
	ex03b = 10;
	div = &divv;
	mod = &modv;
	ft_div_mod(ex03a, ex03b, div, mod);
	printf("ex03a: %d, ex03b: %d\n\n", ex03a, ex03b);
	printf("ft_div_mod(ex03a, ex03b, div, mod);\n\n");
	printf("*div: %d, *mod: %d\n\n", *div, *mod);
	printf("--------------------------");
/* ex04 */
	printf("\ntest ex04: void ft_ultimate_div_mod(int *a, int *b);\n\n\n");
	ex04a = 42;
	ex04b = 10;
	printf("ex04a: %d, ex04b: %d\n\n", ex04a, ex04b);
	ft_ultimate_div_mod(&ex04a, &ex04b);
	printf("ft_ultimate_div_mod(&ex04a, &ex04b);\n\n");
	printf("ex04a: %d, ex04b: %d\n\n", ex04a, ex04b);
	printf("--------------------------");
/* ex05 */
	printf("\ntest ex05: void ft_putstr(char *str);\n\n\n");
	printf("ft_putstr(hello);\n\n");
	ft_putstr(str);
	printf("\n\n--------------------------");
/* ex06 */
	printf("\ntest ex06: int ft_strlen(char *str);\n\n");
	ex06 = ft_strlen(str);
	ft_strlen(str);
	printf("%s: %d", str, ex06);
	printf("\n\n--------------------------");
/* ex07 */
	printf("\ntest ex07: void ft_rev_int_tab(int *tab, int size);\n\n");
	for (i = 0; i < 6; i++)
		printf("%d ", tab[i]);
	ft_rev_int_tab(tab, 6);
	printf("\n\nft_rev_int_tab(tab, 6);\n\n");
	for (i = 0; i < 6; i++)
		printf("%d ", tab[i]);
	printf("\n\n--------------------------");
/* ex08 */
	printf("\ntest ex08: void ft_sort_int_tab(int *tab, int size);\n\n");
	for (i = 0; i < 6; i++)
		printf("%d ", tab2[i]);
	ft_sort_int_tab(tab2, 6);
	printf("\n\nft_sort_int_tab(tab, 6);\n\n");
	for (i = 0; i < 6; i++)
		printf("%d ", tab2[i]);
}
