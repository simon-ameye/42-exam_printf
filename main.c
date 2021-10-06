/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:44:45 by sameye            #+#    #+#             */
/*   Updated: 2021/10/06 12:18:09 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
int ft_printf(const char *, ...);

int main (void)
{
	printf("%i\n",    printf("bbla%s%d%x\n", "pipi", -123, -42));
	printf("%i\n", ft_printf("bbla%s%d%x\n", "pipi", -123, -42));
}

*/
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>

int	ft_printf(char const *format, ...);



int main(void)
{
	int	r;

	r = 0;
    F("Simple test\n");
	F("");
	F("--Format---");
	F("\n");
	F("%d", 0);
	F("\n");
	F("%d", 41);
	F("\n");
	F("%d", 1);
	F("\n");
	F("%d", 5454);
	F("\n");
	F("%d", (int)2147483647);
	F("\n");
	F("%d", (int)2147483648);
	F("\n");
	F("%d", (int)-2147483648);
	F("\n");
	F("%d", (int)-2147483649);
	F("\n");
	F("%x", 0);
	F("\n");
	F("%x", 42);
	F("\n");
	F("%x", 1);
	F("\n");
	F("%x", 5454);
	F("\n");
	F("%x", (int)2147483647);
	F("\n");
	F("%x", (int)2147483648);
	F("\n");
	F("%x", (int)-2147483648);
	F("\n");
	F("%x", (int)-2147483649);
	F("\n");
	F("%s", "");
	F("\n");
	F("%s", "toto");
	F("\n");
	F("%s", "wiurwuyrhwrywuier");

	char *s;
	s = NULL;
	F("%s", s);


	F("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", s);
	F("\n");
	F("\n--Mixed---\n");
	F("\n");
	F("%d%x%d%x%d%x%d%x\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
	F("\n");
	F("-%d-%x-%d-%x-%d-%x-%d-%x-\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
	F("\n");
	F("\n");
	F("%s%s%s%s\n", "", "toto", "wiurwuyrhwrywuier", s);
	F("\n");
	F("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", s);
	F("\n");
	F("written: %d\n", r);


	//F("%i, %i", INT_MAX, INT_MIN);
}

