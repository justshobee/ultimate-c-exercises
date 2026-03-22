/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/22 07:55:01 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/22 08:27:45 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int arrA[] = {10, 20, 30};
    int arrB[] = {40, 50, 60, 70};

    int sizeA = sizeof(arrA) / sizeof(arrA[0]);
    int sizeB = sizeof(arrB) / sizeof(arrB[0]);

    int sizeC = sizeA + sizeB;
    int arrC[sizeC];

    int i = 0;
    while(i < sizeA)
    {
        arrC[i] = arrA[i];
        i++;
    }
    i = 0;
    while(i < sizeB)
    {
        arrC[sizeA + i] = arrB[i];
        i++;
    }

    printf("Merged array C: ");
    i = 0;
    while(i < sizeC)
    {
        printf("%d ",arrC[i]);
        i++;
    }


    return 0;
}
