/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/03 11:57:23 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/03 12:05:06 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int data[5] = {1, 3, 5, 7, 9};

	int *ptr = &data[0];
	printf("Array element at index 2 (Value should be 5):\n");
	printf("1. Subscript notation : %d\n",data[2]);
	printf("2. Pointer notation (arr + 2): %d\n",*(data + 2));
	printf("3. Pointer notation (ptr + 2): %d\n",*(ptr + 2));
}
