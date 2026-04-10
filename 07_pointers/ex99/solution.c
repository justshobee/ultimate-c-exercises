/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/10 11:42:52 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/10 12:51:46 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int count_digit(long n)
{
	int len = 0;
	while(n > 0)
	{
		n = n / 10;
		len++;
	}
	return len;

}
char *tt_itoa(long nbr)
{
	char *s = NULL;
	int sign = 1;
	int len = 0;
	if(nbr < 0)
	{
		sign = -1;
		nbr = -nbr;//convert to positive
		len = 1;//sign -
	}
	len += count_digit(nbr) + 1;//null terminator

	s = (char *)malloc(sizeof(char) * len);
	if(s == NULL)
		return s;
	
	int i = len - 1;//becouse we start with index 0 -> len - 1
	s[i] = '\0';//null terminator
	i--;
	
	while(nbr > 0)
	{
		s[i] = ((nbr % 10) + '0');
		nbr = nbr / 10;
		i--;
	}
	
	if(sign == -1)
		s[i] = '-';
	return s;
}
int main()
{
	int num1 = -2147483648;
	int num2 = -987;
	char *s = tt_itoa(num1);

	printf("%d -> \"%s\"\n",num1,s);
	free(s);
	s = NULL;
	return 0;
}

