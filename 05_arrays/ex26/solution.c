/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/27 08:54:58 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/27 09:17:36 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void Print_arr(int arr[],int size)
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
    int arr[] = {10, 15, 22, 27, 34, 41, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int even[size],odd[size];

    int i = 0,ev_count = 0,od_count = 0;
    while(i < size)
    {
        if(arr[i] % 2 == 0)
        {
            even[ev_count] = arr[i];
            ev_count++;
        }
        if(arr[i] % 2 == 1)
        {
            odd[od_count] = arr[i];
            od_count++;
        }
        i++;
    }

    printf("Original arr : ");
    Print_arr(arr,size);
    printf("Even arr : ");
    Print_arr(even,ev_count);
    printf("Odd arr : ");
    Print_arr(odd,od_count);

}
