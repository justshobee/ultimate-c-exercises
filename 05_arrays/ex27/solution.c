/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/27 09:20:10 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/27 09:28:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void print_arr(int arr[],int size)
{
    int i = 0;
    while(i < size)
    {
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    print_arr(arr,size);

    int i = 0;
    int element = arr[i];
    while(i < size - 1)
    {
        arr[i] = arr[i+1];
        i++;
    }
    arr[i] = element;

    print_arr(arr,size);

}
