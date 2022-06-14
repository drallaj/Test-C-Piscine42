#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define RED     "\x1B[31m"
#define GRN     "\x1B[32m"
#define YEL     "\x1B[33m"
#define BLU     "\x1B[34m"
#define MAG     "\x1B[35m"
#define CYN     "\x1B[36m"
#define WHT     "\x1B[37m"
#define RESET   "\x1B[0m"
#define BOLD    "\x1B[1m"

//   printf(RED "red\n"     RESET);
//   printf(GRN "green\n"   RESET);
//   printf(YEL "yellow\n"  RESET);
//   printf(BLU "blue\n"    RESET);
//   printf(MAG "magenta\n" RESET);
//   printf(CYN "cyan\n"    RESET);
//   printf(WHT "white\n"   RESET);

char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(  char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putstr_non_printable(char *str);
//void			*ft_print_memory(void *addr, unsigned int size);

int		main(void)
{
    {
        /**********     Ex00     **********/
        char *src = "Bonjour la piscine 42 !";
        char *dest = malloc((strlen(src) + 1) * sizeof(char));
        char *src2 = src;
        char *dest2 = malloc((strlen(src) + 1) * sizeof(char));
        printf("---------------\n");
        printf(BOLD"C02 Ex00:\n"RESET);
        if (strcmp(ft_strcpy(dest, src), strcpy(dest2, src2)) == 0)
        {
            printf("Src : %s\n", src);
            printf("Dest: %s\n", dest);
            printf(GRN "OK!\n" RESET);
        }
        else 
        {
            printf("Src : %s\n", src);
            printf("Dest: %s\n", dest);
            printf(RED "KO!\n" RESET);
        }
        free(dest);
        free(dest2);
    }
    
    {
        /**********     Ex01     **********/
        char *src = "Bonjour la piscine 42 !";
        char *dest = malloc((strlen(src) + 1) * sizeof(char));
        char *src2 = src;
        char *dest2 = malloc((strlen(src) + 1) * sizeof(char));
        // unsigned int ncpy = strlen(src) + 1;
        unsigned int ncpy = 0;
        printf("---------------\n");
        printf(BOLD"C02 Ex01:\n"RESET);
        if (strcmp(ft_strncpy(dest, src, ncpy), strncpy(dest2, src2, ncpy)) == 0)
        {
            printf("Src : %s-\n", src);
            printf("Dest: %s-(count : %u)\n", dest, ncpy);
            printf(GRN "OK!\n" RESET);
        }
        else 
        {
            printf("Src : %s\n", src);
            printf("Dest: %s (count : %u)\n", dest, ncpy);
            printf(RED "KO!\n" RESET);
        }
        free(dest);
        free(dest2);
    }

        char *is_alpha      = "Bonjour";
        char *is_numeric    = "42";
        char *is_lowercase  = "hello";
        char *is_uppercase  = "WORLD";
        char *is_printable  = "Hello 42 !";

        printf("---------------\n");
        printf(CYN "Examples:\n");
        printf("Alpha     : %s\n", is_alpha);
        printf("Numeric   : %s\n", is_numeric);
        printf("Lowercase : %s\n", is_lowercase);
        printf("Uppercase : %s\n", is_uppercase);
        printf("Printable : %s\n"RESET, is_printable);

    {
        /**********     Ex02     **********/
        printf("-----\n");
        printf(BOLD"C02 Ex02: Is alpha?\n"RESET);
        if (ft_str_is_alpha(is_alpha) == 1)
            printf(GRN"Alpha     : OK\n"RESET);
        else
            printf(RED"Alpha     : KO\n"RESET);

        if (ft_str_is_alpha(is_numeric)   == 0)
            printf(GRN"Numeric   : NO\n"RESET);
        else
            printf(RED"Numeric   : KO\n"RESET);

        if (ft_str_is_alpha(is_lowercase) == 1)
            printf(GRN"Lowercase : OK\n"RESET);
        else
            printf(RED"Lowercase : KO\n"RESET);

        if (ft_str_is_alpha(is_uppercase) == 1)
            printf(GRN"Uppercase : OK\n"RESET);
        else
            printf(RED"Uppercase : KO\n"RESET);
            
        if (ft_str_is_alpha(is_printable) == 0)
            printf(GRN"Printable : NO\n"RESET);
        else
            printf(RED"Printable : KO\n"RESET);
    }

    {
        /**********     Ex03     **********/
        printf("-----\n");
        printf(BOLD"C02 Ex03: Is numeric?\n" RESET);
        if (ft_str_is_numeric(is_alpha) == 0)
            printf(GRN"Alpha     : NO\n"RESET);
        else
            printf(RED"Alpha     : KO\n"RESET);

        if (ft_str_is_numeric(is_numeric)   == 1)
            printf(GRN"Numeric   : OK\n"RESET);
        else
            printf(RED"Numeric   : KO\n"RESET);

        if (ft_str_is_numeric(is_lowercase) == 0)
            printf(GRN"Lowercase : NO\n"RESET);
        else
            printf(RED"Lowercase : KO\n"RESET);

        if (ft_str_is_numeric(is_uppercase) == 0)
            printf(GRN"Uppercase : NO\n"RESET);
        else
            printf(RED"Uppercase : KO\n"RESET);

        if (ft_str_is_numeric(is_printable) == 0)
            printf(GRN"Printable : NO\n"RESET);
        else
            printf(RED"Printable : KO\n"RESET);
    }

    {
        /**********     Ex04     **********/
        printf("-----\n");
        printf(BOLD"C02 Ex04: Is lowercase?\n" RESET);
        if (ft_str_is_lowercase(is_alpha) == 0)
            printf(GRN"Alpha     : NO\n"RESET);
        else
            printf(RED"Alpha     : KO\n"RESET);

        if (ft_str_is_lowercase(is_numeric)   == 0)
            printf(GRN"Numeric   : NO\n"RESET);
        else
            printf(RED"Numeric   : KO\n"RESET);

        if (ft_str_is_lowercase(is_lowercase) == 1)
            printf(GRN"Lowercase : OK\n"RESET);
        else
            printf(RED"Lowercase : KO\n"RESET);

        if (ft_str_is_lowercase(is_uppercase) == 0)
            printf(GRN"Uppercase : NO\n"RESET);
        else
            printf(RED"Uppercase : KO\n"RESET);

        if (ft_str_is_lowercase(is_printable) == 0)
            printf(GRN"Printable : NO\n"RESET);
        else
            printf(RED"Printable : KO\n"RESET);
    }

    {
        /**********     Ex05     **********/
        printf("-----\n");
        printf(BOLD"C02 Ex05: Is uppercase?\n"RESET);
        if (ft_str_is_uppercase(is_alpha) == 0)
            printf(GRN"Alpha     : NO\n"RESET);
        else
            printf(RED"Alpha     : KO\n"RESET);

        if (ft_str_is_uppercase(is_numeric)   == 0)
            printf(GRN"Numeric   : NO\n"RESET);
        else
            printf(RED"Numeric   : KO\n"RESET);

        if (ft_str_is_uppercase(is_lowercase) == 0)
            printf(GRN"Lowercase : NO\n"RESET);
        else
            printf(RED"Lowercase : KO\n"RESET);

        if (ft_str_is_uppercase(is_uppercase) == 1)
            printf(GRN"Uppercase : OK\n"RESET);
        else
            printf(RED"Uppercase : KO\n"RESET);

        if (ft_str_is_uppercase(is_printable) == 0)
            printf(GRN"Printable : NO\n"RESET);
        else
            printf(RED"Printable : KO\n"RESET);
    }

    {
        /**********     Ex06     **********/
        printf("-----\n");
        printf(BOLD"C02 Ex06: Is printable?\n"RESET);
        if (ft_str_is_printable(is_alpha) == 1)
            printf(GRN"Alpha     : OK\n"RESET);
        else
            printf(RED"Alpha     : KO\n"RESET);

        if (ft_str_is_printable(is_numeric)   == 1)
            printf(GRN"Numeric   : OK\n"RESET);
        else
            printf(RED"Numeric   : KO\n"RESET);

        if (ft_str_is_printable(is_lowercase) == 1)
            printf(GRN"Lowercase : OK\n"RESET);
        else
            printf(RED"Lowercase : KO\n"RESET);

        if (ft_str_is_printable(is_uppercase) == 1)
            printf(GRN"Uppercase : OK\n"RESET);
        else
            printf(RED"Uppercase : KO\n"RESET);

        if (ft_str_is_printable(is_printable) == 1)
            printf(GRN"Printable : OK\n"RESET);
        else
            printf(RED"Printable : KO\n"RESET);
    }

        char    lowercase[] = "Bonjour la compagnie";
        char    uppercase[] = "hELLO-WORLD THIS IS 42!";
        char    lower_and_uppercase[] = "Bonjour+thiS is 42!";
        // char    example42[] = "salut, comment tu vas ? 42mots quarante-DEUX; cinquante+et+un";
        char    example42[] = "M5+If(UxlmFs<Rlt@46&/5GaxRq%F$3	OdIn|'97.";
        char    example42expect[] = "M5+If(Uxlmfs<Rlt@46&/5gaxrq%F$3	Odin|'97.";

        // lowercase = (char*)malloc(sizeof(src));

        printf("---------------\n");
        printf(CYN "Examples:\n");
        printf("Lowercase: %s\n", lowercase);
        printf("Uppercase: %s\n", uppercase);
        printf("Lower and Uppercase: %s\n", lower_and_uppercase);
        printf("Example42: %s\n"RESET, example42);
    
    {
        /**********     Ex07     **********/
        printf("-----\n");
        printf(BOLD"C02 Ex07: upcase!\n"RESET);
        printf("%s\n", ft_strupcase(lowercase));
        printf("%s\n", ft_strupcase(uppercase));
        printf("%s\n", ft_strupcase(lower_and_uppercase));
        printf("%s\n", ft_strupcase(example42));
    }

    {
        /**********     Ex08     **********/
        printf("-----\n");
        printf(BOLD"C02 Ex08: lowercase!\n"RESET);
        printf("%s\n", ft_strlowcase(lowercase));
        printf("%s\n", ft_strlowcase(uppercase));
        printf("%s\n", ft_strlowcase(lower_and_uppercase));
        printf("%s\n", ft_strlowcase(example42));
    }

	{
        /**********     Ex09     **********/
        printf("-----\n");
        printf(BOLD"C02 Ex09: Capitalize!\n"RESET);
        printf("%s\n", ft_strcapitalize(lowercase));
        printf("%s\n", ft_strcapitalize(uppercase));
        printf("%s\n", ft_strcapitalize(lower_and_uppercase));
        printf("%s\n", ft_strcapitalize(example42));
        printf("%s (Expect this)\n", example42expect);
    }
    
    {
        /**********     Ex10     **********/
        printf("-----\n");
        printf(BOLD"C02 Ex10: StrLcpy!\n"RESET);
	char		d1[] = "oooo";
	char		s1[] = "kkkk";
	char		d2[] = "oooo";
	const char	s2[] = "kkkk";

	printf("10 : %s | ", d1);
	if (ft_strlcpy(d1, s1, 4) == strlcpy(d2, s2, 4) && strcmp(d1, d2) == 0)
		printf("OK | ");
	else
		printf("KO | ");
	printf("%s", d1);

	char		d12[] = "oooo";
	char		s12[] = "kkkk";
	char		d22[] = "oooo";
	const char	s22[] = "kkkk";

	printf("  -|-  %s | ", d12);
	if (ft_strlcpy(d12, s12, 0) == strlcpy(d22, s22, 0) && strcmp(d12, d22) == 0)
		printf("OK | ");
	else
		printf("KO | ");
	printf("%s", d12);

	char		d13[] = "oo";
	char		s13[] = "kkkk";
	char		d23[] = "oo";
	const char	s23[] = "kkkk";

	printf("  -|-  %s | ", d13);
	if (ft_strlcpy(d13, s13, 3) == strlcpy(d23, s23, 3) && strcmp(d13, d23) == 0)
		printf("OK | ");
	else
		printf("KO | ");
	printf("%s\n", d13);

	char		d14[] = "oo";
	char		s14[] = "kkkk";
	char		d24[] = "oo";
	const char	s24[] = "kkkk";

	printf("  -|-  %s | ", d13);
	if (ft_strlcpy(d14, s14, 1) == strlcpy(d24, s24, 1) && strcmp(d14, d24) == 0)
		printf("OK | ");
	else
		printf("KO | ");
	printf("%s\n", d13);
}

    //     /**********     Ex11     **********/
	// ft_putstr_non_printable("11 : Test : Cou\tcou\ntu\vvas\fbien\r ?");
	// printf("\n  Reponse : Cou\\09cou\\0atu\\0bvas\\0cbien\\0d ?\n");



        /**********     Ex12     **********/
	// unsigned long	t;

	// t = (unsigned long)&i;
	// printf("\n----------------\n");
	// printf("\n%lu", t);
	// printf("\n%p", &i);
	// printf("\n%lu", t % 16);
	// t/= 16;
	// printf("\n%lu", t % 16);
	// t/= 16;
	// printf("\n%lu", t % 16);
	// t/= 16;
	// printf("\n%lu", t % 16);
	// t/= 16;
	// printf("\n----------------\n");

	// printf("12 :\n");
	// ft_print_memory(&i, 1);


	return (0);
}