/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/06 10:14:06 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/06 10:22:26 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
bool is_sorted(int *arr,int size)
{
	int i = 0;
	while(i < size - 1)
	{
		if(arr[i] > arr[i+1])
			return false;
		i++;
	}
	return true;
}
void print_res(int *ptr,int size)
{
	bool res = is_sorted(ptr,size);
	if(res == true)
		printf("Array is sorted : true\n");
	else
		printf("Array is sorted : false\n");

}
int main()
{
	int sorted_arr[] = {10, 20, 30, 40, 50};
	int unsorted_arr[] = {10, 30, 20, 40, 50};
	int size = 5;

	print_res(sorted_arr,size);
	print_res(unsorted_arr,size);

	return 0;
}
