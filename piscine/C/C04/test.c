/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 03:08:13 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/13 03:08:14 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);
void ft_putstr(char *str);
void ft_putnbr(int nb);
int ft_atoi(char *str);
void ft_putnbr_base(int nbr, char *base);
int ft_atoi_base(char *str, char *base);


int	main(void)
{
// ex00
	printf("--------------------\n");
	printf("ex00\n\n");
	printf("ft_strlen('Hello')\n");
	printf("return: %d \n\n", ft_strlen("Hello"));
// ex01
	printf("--------------------\n");
	printf("ex01\n\n");
	printf("ft_putstr('Hello')\n");
	ft_putstr("Hello");
// ex02
	printf("\n\n--------------------\n");
	printf("ex02\n\n");
	printf("ft_putnbr(42)\n");
	ft_putnbr(42);
	printf("\n\nft_putnbr(-2147483648)\n");
	ft_putnbr(-2147483648);
// ex03
	printf("\n\n--------------------\n");
	printf("ex03\n\n");
	printf("ft_atoi(' ---+--+1234ab567')\n");
	printf("result: %d", ft_atoi(" ---+--+1234ab567"));
// ex04
	printf("\n\n--------------------\n");
	printf("ex04\n\n");
	printf("ft_putnbr_base(-123, '0123456789ABCDEF')\n");
	ft_putnbr_base(-123, "0123456789ABCDEF");
// ex05
	printf("\n\n--------------------\n");
	printf("ex05\n\n");
	printf("ft_atoi_base('7b', '0123456789ABCDEF')\n");
	printf("return: %d", ft_atoi_base("7b", "0123456789ABCDEF"));
	printf("\n\n--------------------\n");
}
