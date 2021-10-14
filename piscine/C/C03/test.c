/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:38:07 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/12 23:38:08 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	ex00_01str1[] = {"1234567890"};
	char	ex00_01str2[] = {"1234597890"};
	char	ex00_01str3[] = {"1234567890"};
	char	ex02_03str[] = {"42"};
	char	ex02_03dest[20] = {"ecole_"};
	char	ex04_05str[] = {"ecole42ecole"};
	char	ex05dest[10] = {"Hello"};

// ex00
	printf("-----------------------------\n");
	printf("ex00\n\n");
	printf("ft_strcmp('1234567890', '1234597890')\n");
	printf("return: %d\n\n", ft_strcmp(ex00_01str1, ex00_01str2));
	printf("ft_strcmp('1234567890', '1234567890')\n");
	printf("return: %d\n\n", ft_strcmp(ex00_01str1, ex00_01str3));
// ex01
	printf("-----------------------------\n");
	printf("ex01\n\n");
	printf("ft_strncmp('1234567890', '1234597890', 5)\n");
	printf("return: %d\n\n", ft_strncmp(ex00_01str1, ex00_01str2, 5));
	printf("ft_strncmp('1234567890', '1234597890, 6')\n");
	printf("return: %d\n\n", ft_strncmp(ex00_01str1, ex00_01str2, 6));
// ex02
	printf("-----------------------------\n");
	printf("ex02\n\n");
	printf("ft_strcat('ecole_', '42')\n");
	printf("return: %s\n\n", ft_strcat(ex02_03dest, ex02_03str));
// ex03
	printf("-----------------------------\n");
	printf("ex03\n\n");
	printf("ft_strncat('ecole_42', '42', 2)\n");
	printf("return: %s\n\n", ft_strncat(ex02_03dest, ex02_03str, 2));
	printf("ft_strncat('ecole_4242', '42', 1)\n");
	printf("return: %s\n\n", ft_strncat(ex02_03dest, ex02_03str, 1));
// ex04
	printf("-----------------------------\n");
	printf("ex04\n\n");
	printf("ft_strstr('ecole42ecole', '42')\n");
	printf("return: %s\n\n", ft_strstr(ex04_05str, "42"));
	printf("ft_strstr('ecole4ecole', '42')\n");
	printf("return: %s\n\n", ft_strstr("ecole4ecole", "42"));
// ex05
	printf("-----------------------------\n");
	printf("ex05\n\n");
	printf("ft_strlcat('Hello', 'ecole4ecole', 7)\n");
	printf("return: %d\n\n", ft_strlcat(ex05dest, "ecole4ecole", 7));
}
