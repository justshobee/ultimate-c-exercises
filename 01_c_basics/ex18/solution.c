/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/06 10:53:15 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/06 11:11:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int nbr;
	do
	{
		printf("-----MENU -----\n");
		printf("1. Greet\n");
		printf("2. Say Goodbye\n");
		printf("3. Exit\n");

		printf("Enter your option : ");
		scanf("%d",&nbr);
		switch(nbr)
		{
			case 1:
				printf("Hello! Welcome to the program.\n\n");
				break;
			case 2:
				printf("Goodbye! Have a nice day.\n\n");
				break;
			case 3:
				printf("Exiting program. Thank you!\n");
				break;
			default:
				printf("Invalid choice !\n");
		}

	}while(nbr != 3);

	return 0;
}
