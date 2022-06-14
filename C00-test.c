/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C00-test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:25:19 by nadel-be          #+#    #+#             */
/*   Updated: 2022/06/08 07:25:24 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    ft_putchar(char c);
void    ft_print_alphabet(void);
void    ft_print_reverse_alphabet(void);
void    ft_print_numbers(void);
void    ft_is_negative(int n);
void    ft_print_comb(void);
void    ft_print_comb2(void);
void    ft_putnbr(int nb);
// void    ft_print_combn(int n);

int main(void)
{
    {
        printf("---------------\n");
        printf("C00 Ex00 - Putchar:\n");
        ft_putchar('O');
        ft_putchar('K');
        ft_putchar('?');
        ft_putchar('1');
        ft_putchar('0');
        ft_putchar('0');
        ft_putchar('%');
        printf("\n");
    }

    {
        printf("---------------\n");
        printf("C00 Ex01 - Print Alphabet:\n");
        ft_print_alphabet();
        printf("\n");
    }

    {
        printf("---------------\n");
        printf("C00 Ex02 - Print Reverse Alphabet:\n");
        ft_print_reverse_alphabet();
        printf("\n");
    }

    {
        printf("---------------\n");
        printf("C00 Ex03 - Print Numbers:\n");
        ft_print_numbers();
        printf("\n");
    }

    {
        printf("---------------\n");
        printf("C00 Ex04 - Is Negative ?:\n");
        printf("1 : ");
        ft_is_negative(1);
        printf("\n");
        printf("0 : ");
        ft_is_negative(0);
        printf("\n");
        printf("-1 : ");
        ft_is_negative(-1);
        printf("\n");
    }

    {
        printf("---------------\n");
        printf("C00 Ex05 - Print Comb:\n");
        ft_print_comb();
        printf("\n");
    }

    {
        printf("---------------\n");
        printf("C00 Ex06 - Print Comb II:\n");
        ft_print_comb2();
        printf("\n");
    }

    {
        printf("---------------\n");
        printf("C00 Ex07 - Putnbr:\n");
        ft_putnbr(0);
        printf("\n");
        ft_putnbr(1);
        printf("\n");
        ft_putnbr(-1);
        printf("\n");
        ft_putnbr(10);
        printf("\n");
        ft_putnbr(-10);
        printf("\n");
        ft_putnbr(2147483647);
        printf("\n");
        ft_putnbr(-2147483648);
        printf("\n");
    }

    // {
    //     printf("---------------\n");
    //     printf("C00 Ex08 - Print combN:\n");
    //     printf("n = 1\n");
    //     ft_print_combn(1);
    //     printf("\n");
    //     printf("-----\n");
    //     printf("n = 3\n");
    //     ft_print_combn(3);
    //     printf("\n");
    //     printf("-----\n");
    //     printf("n = 9\n");
    //     ft_print_combn(9);
    //     printf("\n");
    //     printf("-----\n");
    //     printf("\n");
    // }

    return 0;
}
