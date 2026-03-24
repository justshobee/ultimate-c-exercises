/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/24 07:27:07 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/24 08:46:40 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void bubble_sort(int arr[],int size)
{
    int i = 0;
    bool swaped;
    while(i < size - 1)
    {
        swaped = 0;
        int j = 0;
        while(j < size - 1 - i)
        {
            if(arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                swaped = 1;
            }
            j++;
        }
        if(swaped = 0)
            break;
        i++;
    }
}

int remove_dupl_ele(int arr[],int size)
{
    int i = 1, j = 0;
    while(i < size)
    {
        if(arr[i] != arr[j])
        {
            arr[j + 1] = arr[i];
            j++;
        }
        i++;
    }

    return j + 1;
}


int main()
{
    int arr[] = {10, 20, 20, 30, 10, 40, 50, 50, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr,size);
    int new_s = remove_dupl_ele(arr,size);
    int i = 0;
    while(i < new_s)
    {
        printf("%d ",arr[i]);
        i++;
    }
}

/*In-Place Removal: We use a pointer j to track the position where the next unique element should be written,
 * and i to read all elements. The condition arr[i] != arr[j] ensures that only unique values are copied to
 * the front of the array. The final number of unique elements is j+1, which is returned as the new effective
 * size of the array. The elements after this new size are logically considered removed.*/
