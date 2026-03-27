/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/27 10:28:28 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/27 10:43:27 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//12345
//
void rotate_right_one(int arr[],int size)
{
    int element = arr[size - 1];
    int i = size - 1;
    while(i > 0)
    {
        arr[i] = arr[i-1];
        i--;
    }
    arr[0] = element;
}

void rotate_right_n(int arr[],int size,int n)
{
    int i = 0;
    while(i < n)
    {
        rotate_right_one(arr,size);
        i++;
    }
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
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Rotate right by 3 positions

    printf("Original array: ");
    print_arr(arr,size);

    rotate_right_n(arr,size,k);

    printf("Array after right rotation by %d: ",k);
    print_arr(arr,size);

    return 0;
}
