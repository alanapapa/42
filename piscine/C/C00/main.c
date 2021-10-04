#include <stdio.h>

void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_print_comb(void);
void ft_print_comb2(void);
void ft_putnbr(int nb);

int	main(void)
{
	printf("Test 00: ft_putchar('a');\n");
	ft_putchar('a');

	printf("\n\n------\n\nTest 01: ft_print_alphabet();\n");
	ft_print_alphabet();

	printf("\n\n------\n\nTest 02: ft_print_reverse_alphabet();\n");
	ft_print_reverse_alphabet();

	printf("\n\n------\n\nTest 03: ft_print_numbers();\n");
	ft_print_numbers();

	printf("\n\n------\n\nTest 04: ft_is_negative(-1);\n");
	ft_is_negative(-1);
	printf("\nTest 04: ft_is_negative(0);\n");
	ft_is_negative(0);

	printf("\n\n------\n\nTest 05: ft_print_comb();\n");
	ft_print_comb();

	printf("\n\n------\n\nTest 06: ft_print_comb2();\n");
	ft_print_comb2();

	printf("\n\n------\n\nTest 07: ft_putnbr(142);\n");
	ft_putnbr(142);
	printf("\nTest 07: ft_putnbr(-142);\n");
	ft_putnbr(-142);

	return (0);
}

// norminette -R CheckForbiddenSourceHeader
// gcc -Wall -Wextra -Werror -I . ex00/ft_putchar.c ex01/ft_print_alphabet.c ex02/ft_print_reverse_alphabet.c ex03/ft_print_numbers.c ex04/ft_is_negative.c ex05/ft_print_comb.c ex06/ft_print_comb2.c ex07/ft_putnbr.c main.c