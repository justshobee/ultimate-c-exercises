/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/05 12:00:11 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/05 12:11:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int insert_ele(int *ptr,int size,int pos,int ele)
{
	pos = pos - 1;
	int end = size;
	while(end > pos)
	{
		*(ptr + end)  = ptr[end-1];
		end--;
	}
	ptr[end] = ele;
	size++;

	return size;
}

void print_arr(int *ptr,int size)
{
	int i = 0;
	while(i < size)
	{
		printf("%d ",*ptr);
		ptr++;
		i++;
	}
	printf("\n");
}
int main()
{
    int size = 5; // Initial size is 5, capacity for 6
    int arr[6] = {10, 20, 30, 40, 50}; 
    int ele = 35;
    int pos = 4; // Insert at Position 4 (index 3)	

	size = insert_ele(arr,size,pos,ele);
	printf("Array after inserting %d at postition %d (index : %d) : \n",ele,pos,pos-1);
	print_arr(arr,size);
    return 0;	
}
