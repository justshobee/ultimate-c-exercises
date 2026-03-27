/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/27 08:28:01 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/27 08:52:45 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

bool comp_arr(int arr1[],int size1,int arr2[],int size2)
{
    if(size1 != size2)
        return false;

    int i = 0;
    while(i < size1)
    {
        if(arr1[i] != arr2[i])
            return false;
        i++;
    }
    return true;
}
void printres(bool res,char arr_x,char arr_y)
{
    if(res == true)
        printf("%c and %c are equal : True\n",arr_x,arr_y);
    else
        printf("%c and %c are equal : false\n",arr_x,arr_y);
}
int main()
{
    int arr_a[] = {10, 20, 30, 40};
    int size_a = sizeof(arr_a) / sizeof(arr_a[0]);

    int arr_b[] = {10, 20, 30, 40}; // Equal to A
    int size_b = sizeof(arr_b) / sizeof(arr_b[0]);

    int arr_c[] = {10, 20, 30, 41}; // Mismatch in last element
    int size_c = sizeof(arr_c) / sizeof(arr_c[0]);

    int arr_d[] = {10, 20, 30};     // Different size
    int size_d = sizeof(arr_d) / sizeof(arr_d[0]);


    printres(comp_arr(arr_a,size_a,arr_b,size_b),'A','B');
    printres(comp_arr(arr_a,size_a,arr_c,size_c),'A','C');
    printres(comp_arr(arr_a,size_a,arr_d,size_d),'A','D');

    return 0;
}
