/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/24 06:57:35 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/24 07:26:08 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void merge_sorted_arrays(int arr1[],int size1,int arr2[],int size2,int arr3[])
{
    int i = 0,j = 0,k = 0;

    while(i < size1 && j < size2)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i < size1)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while(j < size2)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
int main()
{
    int arr1[] = {10, 30, 50, 70};
    int size1 = 4;
    int arr2[] = {20, 40, 60, 80, 90};
    int size2 = 5;

    int size3 = size1 + size2;
    int arr3[size3];

    merge_sorted_arrays(arr1,size1,arr2,size2,arr3);

    printf("Merged sorted array: ");
    int i = 0;
    while(i < size3)
    {
        printf("%d ",arr3[i]);
        i++;
    }

    return 0;
}
