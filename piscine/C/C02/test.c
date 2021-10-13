#include <stdio.h>

char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int    		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char		*ft_strupcase(char *str);
char		*ft_strlowcase(char *str);
char		*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void		ft_putstr_non_printable(char *str);
//void		*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char		*r;
	char		dest[7];
	char		src[] = {"hello"};
	char		ex01dest[5];
	char		ex01src[] = {"hellohello"};
	char		ex01src2[] = {"ok"};
	unsigned int	n;
	char		ex02a[] = {"ok"};
	char		ex02b[] = {"not0k"};
	char		ex02empty[] = {""};
	int		i;
	char		num[] = {"0123456789"};
	char		notnum[] = {"0a1b2c1"};
	char		ex04[] = {"hEllO"};
	char		ex05[] = {"HELLO"};
	char		ex06[] = {"h,e,\n,l,l,o"};
	char		ex07[] = {"lowercase"};
	char		*ex07r;
	char		ex09[] = {"salut, Comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	char		ex10dest[19];
	char		ex10src[] = {"Hello there"};
	unsigned int	*ex10r;
	unsigned int	ex10i;
	char		ex11str[] = {"Coucou\ntu\tvas\vtbien ?"};
//	void		*addr;
//	char		ex12str[] = {"Bonjour les amin"};
//	unsigned int	ex12n;

//ex00
	printf("--------------------");
	printf("\ntest ex00: char *ft_strcpy(char *dest, char *src);\n\n");
	printf("src: %s\n", src);
	printf("dest: %s\n\n", dest);
	printf("ft_strcpy(dest, src)\n\n");
	r = ft_strcpy(dest, src);
	printf("dest: %s\n\n", dest);
//ex01
	printf("--------------------");
	n = 5;
	printf("\ntest ex01: char *ft_strncpy(char *dest, char *src, unsigned int n);\n\n");
        printf("ex01src: %s, n: %d\n\n", ex01src, n);
	printf("ft_strcpy(ex01dest, ex01src, n);\n\n");
        r = ft_strncpy(ex01dest, ex01src, n);
        printf("ex01dest: %s\n\n", ex01dest);
	printf("---\n\n");
	printf("ex01src2: %s, n: %d\n\n", ex01src2, n);
        printf("ft_strcpy(ex01dest, ex01src2, n);\n\n");
        r = ft_strncpy(ex01dest, ex01src2, n);
        printf("ex01dest: %s\n\n", ex01dest);
//ex02
        printf("--------------------");
	printf("\ntest ex02: int ft_str_is_alpha(char *str);\n\n");
	printf("ft_str_is_alpha('ok');\n");
	i = ft_str_is_alpha(ex02a);
	printf("return %d\n\n", i);
	printf("ft_str_is_alpha('not0k');");
        i = ft_str_is_alpha(ex02b);
        printf("\nreturn %d\n\n", i);
	printf("ft_str_is_alpha('');");
        i = ft_str_is_alpha(ex02empty);
        printf("\nreturn %d\n\n", i);
//ex03
	printf("--------------------");
        printf("\ntest ex03: int ft_str_is_numeric(char *str);\n\n");
        printf("\nft_str_is_numeric('0123456789');");
        i = ft_str_is_numeric(num);
        printf("\nreturn %d", i);
        printf("\n\nft_str_is_numeric('0a1b2c1');");
        i = ft_str_is_numeric(notnum);
        printf("\nreturn %d", i);
        printf("\n\nft_str_is_numeric('');");
        i = ft_str_is_numeric(ex02empty);
        printf("\nreturn %d\n\n", i);
//ex04
	printf("--------------------");
        printf("\ntest ex04: int ft_str_is_lowercase(char *str);\n\n");
	printf("\nft_str_is_lowercase('hello');");
        i = ft_str_is_lowercase(src);
        printf("\nreturn %d", i);
	printf("\n\nft_str_is_lowercase('hEllO');");
        i = ft_str_is_lowercase(ex04);
        printf("\nreturn %d", i);
        printf("\n\nft_str_is_lowercase('');");
        i = ft_str_is_numeric(ex02empty);
        printf("\nreturn %d\n\n", i);
//ex05
        printf("--------------------");
        printf("\ntest ex05: int ft_str_is_uppercase(char *str);\n\n");
        printf("\nft_str_is_uppercase('HELLO');");
        i = ft_str_is_uppercase(ex05);
        printf("\nreturn %d", i);
        printf("\n\nft_str_is_uppercase('hEllO');");
        i = ft_str_is_uppercase(ex04);
        printf("\nreturn %d", i);
        printf("\n\nft_str_is_uppercase('');");
        i = ft_str_is_numeric(ex02empty);
        printf("\nreturn %d\n\n", i);
//ex06
        printf("--------------------");
        printf("\ntest ex06: int ft_str_is_printable(char *str);\n\n");
        printf("\nft_str_is_printable('HELLO');");
        i = ft_str_is_printable(ex05);
        printf("\nreturn %d", i);
        printf("\n\nft_str_is_printable('he\\nllo');");
        i = ft_str_is_printable(ex06);
        printf("\nreturn %d", i);
        printf("\n\nft_str_is_printable('');");
        i = ft_str_is_printable(ex02empty);
        printf("\nreturn %d\n\n", i);
//ex07
        printf("--------------------");
        printf("\ntest ex07: char *ft_strupcase(char *str);\n\n");
        printf("ft_strupcase('lowercase');");
        ex07r = ft_strupcase(ex07);
        printf("\nreturn %s\n\n", ex07);
//ex08
        printf("--------------------");
        printf("\ntest ex08: char *ft_strlowcase(char *str);\n\n");
        printf("ft_strlowcase('LOWERCASE');");
        ex07r = ft_strlowcase(ex07);
        printf("\nreturn %s\n\n", ex07);
//ex09
        printf("--------------------");
        printf("\ntest ex09: char *ft_strcapitalize(char *str);\n\n");
        printf("ft_strcapitalize('salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un');");
        r = ft_strcapitalize(ex09);
        printf("\nreturn %s\n\n", ex09);
//ex10
        printf("--------------------");
        printf("\ntest ex10: unsigned int *ft_strlcpy(char *dest, char *src, unsigned int size);\n\n");
        printf("ft_strlcpy('1234567890123456789', 'Hello there', 19);");
        ex10i = ft_strlcpy(ex10dest, ex10src, 19);
        ex10r = &ex10i;
	printf("\nreturn %u\n\n", *ex10r);
//ex11
        printf("--------------------");
        printf("\ntest ex11: void ft_putstr_non_printable(char *str);\n\n");
        printf("ft_putstr_non_printable('Coucou\ntu\tvas\vtbien ?');\n");
        ft_putstr_non_printable(ex11str);
	printf("\n\n");
//ex12
//	ex12n = 16;
//	addr = &ex12str;
//       printf("--------------------");
//        printf("\ntest ex12: void ft_print_memory(void *addr, unsigned int size);\n\n");
//        printf("ft_print_memory('Bonjour les amin', 16);\n");
//        r = ft_print_memory(void *addr, unsigned int size);
//	r(addr, ex12n);
//        printf("\n\n");
}
