/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 09:42:24 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 10:02:08 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void selection_sort(int *ptr,int size)
{
	int i = 0,j = 0;
	int min;
	int min_i = 0;
	while(i < size)
	{	
		min = 2147483647;
		min_i = 0;
		j = i+1;
		while(j < size)
		{
			if(min > ptr[j])
			{
				min = ptr[i];
				min_i = j;
			}
			j++;
		}
		swap(ptr+i,ptr+min_i);
		i++;
	}
}
int most_freq(int *ptr,int size)
{
	selection_sort(ptr,size);
	int i = 0,j = 0;
	int count,most = 0;
	int most_freq_index = 0;
	while(i < size)
	{
		count = 1;
		j = i + 1;
		while(j < size)
		{
			if(ptr[i] == ptr[j])
			{
				count++;
			}
			j++;
		}
		if(most < count)
		{
			most = count;
			most_freq_index = i;
		}
		i++;
	}
	return ptr[most_freq_index];
}
int main()
{
	int arr[] = {2, 5, 2, 8, 5, 1, 5, 9, 1,1,1,1, 2, 5};
	int size = 14;

	int most_freq_n= most_freq(arr,size);

	printf("The most frequent element is : %d\n",most_freq_n);

	return 0;
}
