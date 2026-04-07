/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 13:01:47 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 13:11:39 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void reverse_portion(int *start,int *end)
{
	while(start < end)
		swap(start++,end--);
}
void print_arr(int *ptr,int size)
{
	int i = 0;
	while(i < size)
		printf("%d ",ptr[i++]);

	printf("\n");
}

int main()
{
	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int size = 7;
	int start_i = 2,end_i = 5;
	int *start = &arr[start_i];
	int *end = &arr[end_i];
	
	printf("Original array : ");
	print_arr(arr,size);

	reverse_portion(start,end);

	printf("Array after reversing indices %d to %d : ",start_i,end_i);
	print_arr(arr,size);
	return 0;

}
