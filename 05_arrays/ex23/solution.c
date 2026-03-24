/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/24 09:00:16 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/24 09:13:31 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void bubble_sort_n(int arr[],int size)
{
    int i = 0;
    bool swapped;
    while(i < size - 1)
    {
        swapped = 0;
        int j = 0;
        while(j < size - i - 1)
        {
            if(arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                swapped = 1;
            }
            j++;
        }
        if(swapped == 0)
            break;
        i++;
    }
}

void print_freq_n(int arr[],int size)
{
    int i = 0;
    int count;
    while(i < size)
    {
        int j = 0;
        count = 0;
        while(j < size)
        {
            if(arr[i] == arr[j])
                count++;
            j++;
        }
        if(arr[i] != arr[i+1])
            printf("Element %d: %d times\n",arr[i],count);
        i++;
    }
}
int main()
{
    int arr[] = {2, 5, 2, 8, 5, 1, 5, 9, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort_n(arr,size);
    print_freq_n(arr,size);

    /*int i = 0;
    while(i < size)
        printf("%d ",arr[i++]);*/

    return 0;
}
