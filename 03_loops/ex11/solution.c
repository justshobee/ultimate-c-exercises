/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/11 12:15:35 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/11 12:25:21 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int nbr;

	do
	{
		printf("\n--- Menu ---\n");
		printf("1. Greet.\n");
		printf("2. Say Goodbye.\n");
		printf("3. Exit.\n");

		printf("Enter a number : ");
		scanf("%d",&nbr);

		switch(nbr)
		{
			case 1:printf("\nHello! Welcome to the program.\n");break;
			case 2 :printf("\nGoodbye! Have a nice day.\n");break;
			case 3:printf("\nExiting program. Thank you!.\n");break;
			default:printf("\nInvalid choice. Please enter 1, 2, or 3.\n");break;
		}

	}while(nbr != 3);

	return 0;
}
