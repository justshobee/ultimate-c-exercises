/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/27 10:16:20 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/27 10:26:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void rotate_left_one(int arr[],int size)
{
    int i = 0;
    int element = arr[0];
    while(i < size - 1)
    {
        arr[i] = arr[i+1];
        i++;
    }
    arr[size - 1] = element;
}
void rotate_left_n(int arr[],int size,int n)
{
    int i = 0;
    while(i < n)
    {
        rotate_left_one(arr,size);
        i++;
    }
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
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_arr(arr,size);

    rotate_left_n(arr,size,3);
    printf("Array after left rotation by 3: ");
    print_arr(arr,size);

    return 0;
}
