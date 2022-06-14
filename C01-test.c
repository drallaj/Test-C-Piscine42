/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C01-test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:25:38 by nadel-be          #+#    #+#             */
/*   Updated: 2022/06/08 07:25:40 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
    int	n;
	int	ultimate_n0;
	int	*ultimate_n1;
	int	**ultimate_n2;
	int	***ultimate_n3;
	int	****ultimate_n4;
	int	*****ultimate_n5;
	int	******ultimate_n6;
	int	*******ultimate_n7;
	int	********ultimate_n8;
	int	n2;
	int	n_save;
	int	n2_save;
	int	tab[10] = {8, 1, -2, 42, 99, 0, -1337, 3, 40, 10};

	{
        // Ex00
        // n = 42;
        printf("---------------\n");
        printf("00 : 42 | ");
        ft_ft(&n);
        printf("%d : ", n);
        if (n == 42)
            printf("Test is: OK\n");
        else
            printf("Test is: KO\n");
    }

    {
        // Ex01
        ultimate_n0 = 12;
        ultimate_n1 = &ultimate_n0;
        ultimate_n2 = &ultimate_n1;
        ultimate_n3 = &ultimate_n2;
        ultimate_n4 = &ultimate_n3;
        ultimate_n5 = &ultimate_n4;
        ultimate_n6 = &ultimate_n5;
        ultimate_n7 = &ultimate_n6;
        ultimate_n8 = &ultimate_n7;
        printf("---------------\n");
        printf("01 : %d >> ", ultimate_n0);
        ft_ultimate_ft(&ultimate_n8);
        printf("%d : ", ultimate_n0);
        if (ultimate_n0	== 42)
            printf("Test: OK\n");
        else
            printf("Test: KO\n");
    }

    {
        // Ex02
        n = 12;
        n_save = n;
        n2 = 24;
        n2_save = n2;
        printf("---------------\n");
        printf("C01 Ex02:\nInit a & b: %d, %d\n ", n, n2);
        ft_swap(&n, &n2);
        printf("Result a & b: %d, %d\n", n, n2);
        if (n == n2_save && n2 == n_save)
            printf("Test: OK\n");
        else
            printf("Test: KO\n");
    }

    {
        // Ex03
        printf("---------------\n");
        n = 42;
        n2 = 10;
        n_save = n / n2;
        n2_save = n % n2;
        printf("C01 Ex03:\nInit: a = %d, b = %d, div = %d, mod = %d\n", n, n2, n_save, n2_save);
        ft_div_mod(n, n2, &n_save, &n2_save);
        printf("Result: div = %d, mod = %d\n", n_save, n2_save);
        if (n_save == n / n2 && n2_save == n % n2)
            printf("Test: OK\n");
        else
            printf("Test: KO\n");
    }

    {
        // Ex04
        printf("---------------\n");
        n = 42;
        n2 = 10;
        n_save = n / n2;
        n2_save = n % n2;
        printf("C01 Ex04:\nInit: a = %d, b = %d\n", n, n2);
        ft_ultimate_div_mod(&n, &n2);
        printf("Result: a = %d, b = %d\n", n, n2);
        if (n_save == n && n2_save == n2)
            printf("Test: OK\n");
        else
            printf("Test: KO\n");
    }

    {
        // Ex05
        printf("---------------\n");
        printf("C01 Ex05:\n");
        ft_putstr("Test is OK ? If you can read this, well done!\n");
    }

    {
        // Ex06
        printf("---------------\n");
        printf("C01 Ex06:\n");
        int n06;
        n06 = ft_strlen("Ceci fait 26 caractères !");
        printf("Ceci fait 26 caractères ? ");
        if (n06 == strlen("Ceci fait 26 caractères !"))
            printf("Test: OK\n");
        else
            printf("Test: KO\n");
    }

    {
        // Ex07
        printf("---------------\n");
        printf("C01 Ex07 : \n[%d, %d, %d, %d, %d, %d, %d, %d, %d, %d]\n",
                tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
        ft_rev_int_tab(tab, 10);
        printf("[%d, %d, %d, %d, %d, %d, %d, %d, %d, %d]\n",
                tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
    }

    {
        // Ex08
        printf("---------------\n");
        printf("08 : [%d, %d, %d, %d, %d, %d, %d, %d, %d, %d] | ",
                tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
        ft_sort_int_tab(tab, 10);
        printf("[%d, %d, %d, %d, %d, %d, %d, %d, %d, %d]\n",
                tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
    }

	return (0);
}
