#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{	
/*---------------------------EX 00 ------------------------------------*/
	
	char *s011 = "b";
	char *s012 = "a";
	printf("\n EX 00 :Result = %i \n", (ft_strcmp(s011, s012)));
	printf("Expected Result = %i \n\n", (strcmp(s011, s012)));

	char *s021 = "a";
	char *s022 = "a";
	printf("\n EX 00 :Result = %i \n", (ft_strcmp(s021, s022)));
	printf("Expected Result = %i \n\n", (strcmp(s021, s022)));

	char *s031 = "Bonjour les copains";
	char *s032 = "Hello my friends !";
	printf("\n EX 00 :Result = %i \n", (ft_strcmp(s031, s032)));
	printf("Expected Result = %i \n\n", (strcmp(s031, s032)));
    
	char *s041 = "Hello World!";
	char *s042 = "Hello World!";
	printf("\n EX 00 :Result = %i \n", (ft_strcmp(s041, s042)));
	printf("Expected Result = %i \n\n", (strcmp(s041, s042)));


/*---------------------------EX 01---------------------------------------*/

	char *s10 = "Patate";
	char *s100 = "Patates";
	unsigned char n10 = 0;
	printf("\n -+- EX 01 :Result = %i \n", (ft_strncmp(s10, s100, n10)));
	printf("Expected Result = %i \n\n", (strncmp(s10, s100, n10)));

	char *s11 = "";
	char *s110 = "Patates";
	unsigned char n11 = 1;
	printf("\n EX 01 :Result = %i \n", (ft_strncmp(s11, s110, n11)));
	printf("Expected Result = %i \n\n", (strncmp(s11, s110, n11)));

	char *s12 = "Patate";
	char *s120 = "\0";
	unsigned char n12 = 2;
	printf("\n EX 01 :Result = %i \n", (ft_strncmp(s12, s120, n12)));
	printf("Expected Result = %i \n\n", (strncmp(s12, s120, n12)));
	
	char *s13 = "nul ";
	char *s130 = "";
	unsigned char n13 = 3;
	printf("\n EX 01 :Result = %i \n", (ft_strncmp(s13, s130, n13)));
	printf("Expected Result = %i \n\n", (strncmp(s13, s130, n13)));

	char *s14 = "012356";
	char *s140 = "012356";
	unsigned char n14 = 4;
	printf("\n EX 01 :Result = %i \n", (ft_strncmp(s14, s140, n14)));
	printf("Expected Result = %i \n\n", (strncmp(s14, s140, n14)));

	char *s15 = "Patate";
	char *s150 = "\0";
	unsigned char n15 = 5;
	printf("\n EX 01 :Result = %i \n", (ft_strncmp(s15, s150, n15)));
	printf("Expected Result = %i \n\n", (strncmp(s15, s150, n15)));

	char *s16 = "日本のゲームクリエイター";
	char *s160 = "日本のゲーム";
	unsigned char n16 = 6;
	printf("\n EX 01 :Result = %i \n", (ft_strncmp(s16, s160, n16)));
	printf("Expected Result = %i \n\n", (strncmp(s16, s160, n16)));


/*---------------------------EX 02---------------------------------------*/

	char dest20[10] = "0";
	char src20[10] = "1";
	char destbis20[10] = "0";
	printf("\n -+- EX 02 :Result = %s \n", (ft_strcat(dest20, src20)));
	printf("Expected Result = %s \n\n", (strcat(destbis20, src20)));

	char dest21[100] = "Patate";
	char dest21bis[100] = "Patate";
	char src21[100] = " chaude !";
	printf("\n EX 02 :Result = %s \n", (ft_strcat(dest21, src21)));
	printf("Expected Result = %s \n\n", (strcat(dest21bis, src21)));

	char dest22[100] = "Jean";
	char dest22bis[100] = "Jean";
	char src22[100] = "-Luc";
	printf("\n EX 02 :Result = %s \n", (ft_strcat(dest22, src22)));
	printf("Expected Result = %s \n\n", (strcat(dest22bis, src22)));

	char dest23[100] = "";
	char dest23bis[100] = "";
	char src23[100] = "-Luc";
	printf("\n EX 02 :Result = %s \n", (ft_strcat(dest23, src23)));
	printf("Expected Result = %s \n\n", (strcat(dest23bis, src23)));

	char dest24[100] = "Jean";
	char dest24bis[100] = "Jean";
	char src24[100] = "";
	printf("\n EX 02 :Result = %s \n", (ft_strcat(dest24, src24)));
	printf("Expected Result = %s \n\n", (strcat(dest24bis, src24)));

/*---------------------------EX 03---------------------------------------*/

	char dest30[50] = "0";
	char dest30b[50] = "0";
	char src30[50] = "1";
	unsigned int n30 = 0;
	printf("\n -+- EX 03 :Result = %s \n", (ft_strncat(dest30, src30, n30)));
	printf("Expected Result = %s \n\n", (strncat(dest30b, src30, n30)));

	char dest31[50] = "Patate";
	char dest31b[50] = "Patate";
	char src31[50] = " chaude !";
	unsigned int n31 = 15;
	printf("\n EX 03 :Result = %s \n", (ft_strncat(dest31, src31, n31)));
	printf("Expected Result = %s \n\n", (strncat(dest31b, src31, n31)));

	char dest32[50] = "Jean";
	char dest32b[50] = "Jean";
	char src32[50] = "-Luc";
	unsigned int n32 = 10;
	printf("\n EX 03 :Result = %s \n", (ft_strncat(dest32, src32, n32)));
	printf("Expected Result = %s \n\n", (strncat(dest32b, src32, n32)));

/*---------------------------EX 04---------------------------------------*/

	char to_find41[50] = "1";
	char str41[50] = "01111110000";
	printf("\n -+- EX 04 :Result = %s \n", (ft_strstr(str41, to_find41)));
	printf("Expected Result = %s \n\n", (strstr(str41, to_find41)));

	char to_find42[50] = "Patate";
	char str42[50] = "Patate chaude !";
	printf("\n EX 04 :Result = %s \n", (ft_strstr(str42, to_find42)));
	printf("Expected Result = %s \n\n", (strstr(str42, to_find42)));

	char to_find43[50] = "Louis";
	char str43[50] = "Jean-Luc Skywalker";
	printf("\n EX 04 :Result = %s \n", (ft_strstr(str43, to_find43)));
	printf("Expected Result = %s \n\n", (strstr(str43, to_find43)));

	char to_find44[50] = "Jean";
	char str44[50] = "";
	printf("\n EX 04 :Result = %s \n", (ft_strstr(str44,to_find44)));
	printf("Expected Result = %s \n\n", (strstr(str44, to_find44)));
	
	char to_find45[50] = "Luc";
	char str45[50] = "Jean-Luc Skywalker";
	printf("\n EX 04 :Result = %s \n", (ft_strstr(str45,to_find45)));
	printf("Expected Result = %s \n\n", (strstr(str45, to_find45)));

/*---------------------------EX 05---------------------------------------*/

	char desti[50] = "0";
	char srci[50] = "01";
	int na = 5;
	char desat[50] = "0";
	char sarc[50] = "01";
	printf("\n -+- EX 05 :Result = %u \n", (ft_strlcat(desti, srci, na)));
	printf("Expected Result = %lu \n\n", (strlcat(desat, sarc, na)));

	char desta[50] = "Patate";
	char srca[50] = " chaude !";
	int nb = 4;
	char destab[50] = "Patate";
	char srcab[50] = " chaude !";
	printf("\n EX 05 :Result = %u \n", (ft_strlcat(desta, srca, nb)));
	printf("Expected Result = %lu \n\n", (strlcat(destab, srcab, nb)));

	char destac[50] = "Jean";
	char srcac[50] = "Luc Skywalker";
	int nc = 0;
	char destb[50] = "Jean";
	char srcb[50] = "Luc Skywalker";
	printf("\n EX 05 :Result = %u \n", (ft_strlcat(destac, srcac, nc)));
    printf("%s\n",destac);
	printf("Expected Result = %lu \n\n", (strlcat(destb, srcb, nc)));

	return(0);
}
