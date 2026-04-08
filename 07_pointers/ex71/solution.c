/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/08 09:18:18 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/08 10:19:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(int count,char *Arrstr[])
{
	if(count == 2)
	{
		printf("The first element : \n");
		printf("The first string in Array '*Arrstr' : \"%s\"\n",*Arrstr);
		printf("The first string in Array '*(Arrstr + 0)': \"%s\"\n",*(Arrstr + 0));
		printf("The first character in first string in Array '*(Arrstr[0]+0)' : '%c'\n",*(Arrstr[0]+0));
		printf("The first character in first string in Array '*(*(Arrstr + 0) + 0)': '%c'\n",*(*(Arrstr + 0) + 0));
		printf("The sec character in first string in Array '*(Arrstr[0]+1)' : '%c'\n",*(Arrstr[0]+1));
		printf("The sec character in first string in Array '*(*(Arrstr + 0) + 1)': '%c'\n",*(*(Arrstr + 0) + 1));
	
		printf("\nThe secend element : \n");
		printf("The second string in Array 'Arrstr[1]' : \"%s\"\n",Arrstr[1]);
		printf("The second string in Array '*(Arrstr + 1)': \"%s\"\n",*(Arrstr + 1));
		printf("The first character in second string in Array '*(Arrstr[1]+0)' : '%c'\n",*(Arrstr[1]+0));
		printf("The first character in second string in Array '*(*(Arrstr + 1) + 0)': '%c'\n",*(*(Arrstr + 1) + 0));
		printf("The sec character in second string in Array '*(Arrstr[1]+1)' : '%c'\n",*(Arrstr[1]+1));
		printf("The sec character in second string in Array '*(*(Arrstr + 1) + 1)': '%c'\n",*(*(Arrstr + 1) + 1));
	}
	
	return 0;
}
