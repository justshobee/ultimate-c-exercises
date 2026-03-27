/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/27 09:30:57 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/27 09:41:03 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void rotate_right(int arr[],int size)
{
    int element = arr[size-1];

    int i = size - 1;
    while(i > 0)
    {
        arr[i] = arr[i-1];
        i--;
    }
    arr[0] = element;
}

void print_arr(int arr[],int size)
{
    int i = 0;
    while(i < size)
    {
        printf("%d ",arr[i++]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    print_arr(arr,size);

    rotate_right(arr,size);

    print_arr(arr,size);
}
