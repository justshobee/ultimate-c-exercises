/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 10:09:09 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 10:19:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
bool comp_arr(int *arr1,int size1,int *arr2,int size2)
{
	if(size1 != size2)
		return false;
	int i = 0;
	while(i < size1)
	{
		if(*(arr1+i) != *(arr2+i))
			return false;
		i++;
	}
	return true;
}
void print_res(int *arr1,int size1,int *arr2,int size2)
{
	bool res = comp_arr(arr1,size1,arr2,size2);

	if(res)
		printf("Arrays are equel\n");
	else
		printf("Arrays are NOT equel\n");
	
	printf("\n");
}
int main()
{
	int arr_a[] = {10, 20, 30, 40};
	int size_a = 4;
	int arr_b[] = {10, 20, 30, 40}; // Equal to A
	int size_b= 4;
	int arr_c[] = {10, 20, 30, 41}; // Mismatch in last element
	int size_c = 4;
	int arr_d[] = {10, 20, 30};     // Different size
	int size_d = 3;

	printf("A and B : ");
	print_res(arr_a,size_a,arr_b,size_b);
	printf("A and C : ");
	print_res(arr_a,size_a,arr_c,size_c);
	printf("A and D : ");
	print_res(arr_a,size_a,arr_d,size_d);

	return 0;
}
