/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/11 11:57:05 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/11 12:11:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);

	char letter = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
	switch(letter)
	{
		case 'a':
		case 'i':
		case 'o':
		case 'e':
		case 'u':
			printf("%c is a Vowel.\n",ch); break;
		default :printf("%c is a Consonant.\n",ch);
	}

	return 0;
}
