/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 13:14:48 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 13:19:50 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int find_miss_n(int *ptr,int size)
{
	int i = 0;
	while(i < size)
	{
		if(ptr[i] != i+1)
			return (i+1);
		i++;
	}
	return -99;
}
int main()
{
	// Array contains numbers from 1 to 9, so N=10. Missing is 6.
	int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
	int size = 9;

	int *tab = arr;
	int miss_n = find_miss_n(tab,size);
	
	printf("The missing number in the sequence %d to %d is : %d\n",tab[0],tab[size-1],miss_n);

	return 0;
}
