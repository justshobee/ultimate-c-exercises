/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/28 08:19:43 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/28 08:47:39 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int remove_ele(int arr[],int size,int pos)
{
    int index = pos - 1;
    int i = size - 1;
    while(index < i)
    {
        arr[index] = arr[index+1];
        index++;
    }
    size--;

    return size;
}

int remove_dup_ele(int arr[],int size)
{
    int i = 0;
    while(i < size - 1)
    {
        if(arr[i] == arr[i+1])
        {
            size = remove_ele(arr,size,i+1);
            i = 0;
        }else
            i++;
    }
    return size;
}
void print_arr(int arr[],int size)
{
    int i = 0;
    while(i < size)
        printf("%d ",arr[i++]);
    printf("\n");
}
int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    print_arr(arr,size);

    size = remove_dup_ele(arr,size);
    printf("Array after removing duplicates (new size %d): ",size);
    print_arr(arr,size);

    return 0;
}
