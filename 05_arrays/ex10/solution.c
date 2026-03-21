/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/21 05:54:52 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/21 06:07:38 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     main()
{
    int size = 9;
    int arr[9] = {15, -5, 20, 0, -10, 30, -25, 5, 0};

    int i = 0;
    printf("Array elements: ");
    while(i < size)
    {
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");

    int sum_pos = 0,sum_neg = 0;

    i = 0;
    while(i < size)
    {
        if(arr[i] > 0)
            sum_pos += arr[i];
        if(arr[i] < 0)
            sum_neg += arr[i];
        i++;
    }
    printf("Sum of all positive numbers: %d\n",sum_pos);
    printf("Sum of all negative numbers: %d\n",sum_neg);

    return 0;
}

