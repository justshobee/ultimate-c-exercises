/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/21 06:25:56 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/21 09:32:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
void sort_arr(int arr[],int size)
{
    int i = 0;
    while(i < size - 1)
    {
        int j = 0;
        while(j < size - i - 1)
        {
            if(arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
            j++;
        }
        i++;
    }
}
int bin_search(int arr[],int key,int size)
{
    int low = 0,mid = (size-1) / 2,high = size-1;

    while(low <= high)
    {
        if(key > mid)
        {
            low = mid;
            mid = (high - mid) / 2;
        } else if(key < mid)
        {
            high  = mid;
            mid = (mid) / 2;
        }
    }
}
int main()
{
    int arr[] = {80,20,10,40,60,70,50,30};
    int search_element = 50;
    int size = sizeof(arr) / sizeof(arr[0]);

    sort_arr(arr,size);
    int i = 0;
    while(i < size)
    {
        printf("%d ",arr[i]);
        i++;
    }
}
