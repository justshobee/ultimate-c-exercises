/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/09 13:28:26 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/09 13:34:38 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void copy_arr(int src[],int dest[],int size)
{
	int i = 0;
	while(i < size)
	{
		dest[i] = src[i];
		i++;
	}
}

void print_arr(int arr[],int size)
{
	int i = 0;
	while(i < size)
	{
		printf("%d ",arr[i]);
		i++;
	}
}
int main()
{
	int src[5] = {5,9,7,6,3};
	int dest[5];

	copy_arr(src,dest,5);

	printf("Source array elements: ");
	print_arr(src,5);
	printf("\nDestination array elements (after copy): ");
	print_arr(dest,5);

	return 0;
}
