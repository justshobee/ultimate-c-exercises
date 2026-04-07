/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 12:00:20 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 12:07:32 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void print_arr(int *ptr,int size)
{
	int i = 0;
	while(i < size)
	{
		printf("%d ",ptr[i]);
		i++;
	}
	printf("\n");
}
int main()
{
	int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
	int size = 9;
	int *ptr = arr;
	print_arr(ptr,size);
	int i = 1,j = 0;
	while(i < size)
	{
		if(ptr[j] != ptr[i])
		{
			j++;
			ptr[j] = ptr[i];
		}
		i++;
	}
	size = j + 1;
	print_arr(ptr,size);


}
