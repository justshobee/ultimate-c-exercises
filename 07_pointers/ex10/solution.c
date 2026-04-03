/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/03 12:41:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/03 18:07:14 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void reverse_arr(int *start,int *end)
{
	//here we compare the addresses
	while(start < end)
	{
		int tmp = *start;//derefrence
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
void print_arr(int *ptr,int size)
{
	int i = 0;
	while(i < size)
	{
		printf("%d ",*(ptr + i));
		i++;
	}
	printf("\n");
}
int main()
{
	int numbers[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(numbers) / sizeof(numbers[0]);

	int *start = numbers;
	int *end = numbers + (size - 1);
	printf("Original array : ");
	print_arr(numbers,size);
	reverse_arr(start,end);
	printf("Reversed array : ");
	print_arr(numbers,size);

	return 0;
}
