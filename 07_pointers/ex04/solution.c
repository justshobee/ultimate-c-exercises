/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/03 07:46:13 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/03 10:25:01 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	printf("Size of int pointer (int *) : %zu bytes\n",sizeof(int *));
	printf("Size of float pointer (float *) : %zu bytes\n",sizeof(float *));
	printf("Size of char pointer (char *) : %zu bytes\n\n",sizeof(char *));
	printf("Size of int pointer (int) : %zu bytes\n",sizeof(int));
	printf("Size of float pointer (float) : %zu bytes\n",sizeof(float));
	printf("Size of char pointer (char) : %zu bytes\n",sizeof(char));
    return 0;	
}
