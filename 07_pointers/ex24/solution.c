/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/11 11:53:00 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/11 12:16:22 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void find_min_max(int arr[],int size,int *min,int *max)
{
	*min = *arr;
	*max = *arr;

	int i = 0;
	while(i < size)
	{
		if(*min > *(arr + i))
			*min = arr[i];
		if(*max < arr[i])
			*max = *(arr + i);
		i++;
	}

}
int main()
{
	int data[] = {15, 7, 22, 1, 9};
	int size = sizeof(data) / sizeof(data[0]);

	int min_ptr;
	int max_ptr;

	find_min_max(data,size,&min_ptr,&max_ptr);

	printf("Min = %d\n",min_ptr);
	printf("Max = %d\n",max_ptr);

	return 0;
}
