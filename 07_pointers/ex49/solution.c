/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/06 10:23:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/06 10:30:44 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_arr(int *tab,int size)
{
	int i = 0;
	bool swapped = 0;
	while(i < size - 1)
	{
		int j = 0;
		swapped = 0;
		while(j < size - 1 - i)
		{
			if(*(tab + j) < *(tab + j + 1))
			{
				int tmp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = tmp;
				swapped = 1;
			}
			j++;
		}
		if(swapped == 0)
			break;
		i++;
	}
}

int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int size = 5;

	sort_arr(arr,size);
	
	printf("Array sorted in descending order : ");
	int i = 0;
	while(i < size)
	{
		printf("%d ",*(arr + i));
		i++;
	}

	return 0;
}
