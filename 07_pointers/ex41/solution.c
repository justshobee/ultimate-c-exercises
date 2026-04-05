/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/05 18:47:25 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/05 18:53:44 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int find_pos(int *ptr,int size,int ele)
{
	int i = 0;
	while(i < size)
	{
		if(*(ptr + i) == ele)
			return i;
		i++;
	}
	return -1;
}

int main()
{
	int arr[] = {10, 50, 30, 70, 80, 20, 90, 40};
	int size = sizeof(arr) / sizeof(arr[0]);
	int element= 70;
	
	int pos = find_pos(arr,size,element);
	printf("Element %d found at index %d\n",element,pos);

	return 0;
}
