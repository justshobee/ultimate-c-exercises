/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/02 10:57:49 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/02 11:36:55 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int tt_strlen(char str[])
{
	int i =0;
	while(str[i] != '\0')
		i++;
	return i;
}
void reverse_str(char str[])
{
	int start = 0;
	int end = tt_strlen(str)-1;

	if(str[start] == '-')
		start++;
	while(start < end)
	{
		char tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
}
//intger to ascii
void tt_itoa(int num)
{
	int nbr = num;
	int i = 0;
	char word[20];
	if(nbr < 0)
	{
		nbr = -nbr;
		word[i] = '-';
		i++;
	}
	
	int rem = 0;
	char ch;
	if(nbr == 0)
	{
		word[i++] = '0';
	}else
	{
		while(nbr != 0)
		{
			rem = nbr % 10;
			ch = rem + '0';
			word[i++] = ch;
			nbr = nbr / 10;
		}
	}
	word[i] = '\0';
	reverse_str(word);

	printf("%d - > \"%s\"\n",num,word);
}

int main()
{
	int num1 = 12345;
	int num2 = -987;

	tt_itoa(num1);
	tt_itoa(num2);
}
