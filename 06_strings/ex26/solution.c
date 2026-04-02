/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/02 09:39:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/02 09:51:05 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_str(char str[])
{
	int i = 0,j = 0;
	bool swapped;
	while(str[i+1] != '\0')
	{
		swapped = false;
		j = 0;
		while(str[j+i+1] != '\0')
		{
			if(str[j] > str[j+1])
			{
				char tmp = str[j];
				str[j] = str[j+1];
				str[j+1] = tmp;
				swapped = true;
			}
			j++;
		}
		if(swapped == false)
			break;
		i++;
	}
}

int main()
{
	char str[] = "Jessa";

	sort_str(str);
	printf("%s.\n",str);
}
