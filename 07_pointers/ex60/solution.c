/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 11:02:55 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 11:09:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void right_rotation_one(int *arr,int size)
{
	int i = size- 1;
	int right_one = arr[i];
	while(i > 0)
	{
		arr[i] = arr[i-1];
		i--;
	}
	arr[0] = right_one;
}

void right_rotation_n(int *tab,int size,int n)
{
	int i = 0;
	while(i < n)
	{
		right_rotation_one(tab,size);
		i++;
	}
}
void print_arr(int *tab,int size)
{
	int i  = 0;
	while(i < size)
		printf("%d ",tab[i++]);
	printf("\n");
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int size  = 7;
	int k = 3; // Rotate right by 3 positions

	printf("Original array : ");
	print_arr(arr,size);

	right_rotation_n(arr,size,k);

	printf("array after right rotation by %d: ",k);
	print_arr(arr,size);

	return 0;
}
	
