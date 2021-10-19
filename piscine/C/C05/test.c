#include <stdio.h>

int	ft_iterative_factorial(int nb);
int	ft_recursive_factorial(int nb);
int	ft_iterative_power(int nb, int power);
int	ft_recursive_power(int nb, int power);
int	ft_fibonacci(int index);
int	ft_sqrt(int nb);
int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("--------------------------------\n");
	printf("ex00\n\n");
	printf("ft_iterative_factorial(5)\n");
	printf("return: %d \n", ft_iterative_factorial(5));
	printf("\n\n--------------------------------\n");
	printf("ex01\n\n");
	printf("ft_recursive_factorial(5)\n");
	printf("return: %d \n", ft_recursive_factorial(5));
	printf("\n\n--------------------------------\n");
	printf("ex02\n\n");
	printf("ft_iterative_power(2, 5)\n");
	printf("return: %d \n", ft_iterative_power(2, 5));
	printf("\n\n--------------------------------\n");
	printf("ex03\n\n");
	printf("ft_recursive_power(2, 5)\n");
	printf("return: %d \n", ft_recursive_power(2, 5));
	printf("\n\n--------------------------------\n");
	printf("ex04\n\n");
	printf("ft_fibonacci(4)\n");
	printf("return: %d \n", ft_fibonacci(4));
	printf("\n\n--------------------------------\n");
	printf("ex05\n\n");
	printf("ft_sqrt(16)\n");
	printf("return: %d \n", ft_sqrt(16));
	printf("\n\n--------------------------------\n");
	printf("ex06\n\n");
	printf("ft_is_prime(90)\n");
	printf("return: %d \n\n", ft_is_prime(90));
	printf("ft_is_prime(89)\n");
	printf("return: %d \n", ft_is_prime(89));
	printf("\n\n--------------------------------\n");
	printf("ex07\n\n");
	printf("ft_find_next_prime(2147483642)\n");
	printf("return: %d \n", ft_find_next_prime(2147483642));
//	printf("return: %d \n", ft_find_next_prime(26));
	printf("\n\n--------------------------------\n");
}
