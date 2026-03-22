/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/21 06:25:56 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/22 07:40:13 by shobeedev            tfaaty fi l3oolaa   */
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
    int low,mid,high;
    low = 0;
    mid = 0;
    high = size - 1;

    while(low <= high)
    {
        mid = low + ((high - low) / 2);
        if(arr[mid] == key)
            return mid;
        if(key < arr[mid])
            high = mid - 1;
        if(key > arr[mid])
            low = mid + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {80,20,10,40,60,70,50,30};
    int search_element = 80;
    int size = sizeof(arr) / sizeof(arr[0]);

    sort_arr(arr,size);
    int i = 0;
    while(i < size)
    {
        printf("%d ",arr[i]);
        i++;
    }

    int pos = bin_search(arr,search_element,size);
    printf("\nElement %d found at index %d.\n",search_element,pos);

    return 0;
}

/*
Binary search operates on the principle of divide and conquer. It uses a while (low <= high)
loop to continue searching as long as the segment is valid. In each step, it calculates the midpoint mid.

    If the element at mid is the target, the index is returned.
    If the target is larger, the search space is narrowed to the right half
        by setting low = mid +     1.
    If the target is smaller, the search space is narrowed to the left half
        by setting high = mid - 1. Because it eliminates half of the remaining
        elements in each step, its time complexity is O(logn), making it vastly
        superior to linear search for large, sorted datasets.
*/
