/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/28 13:04:51 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/28 13:09:30 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];
    int row = 2,col = 2;

    int i = 0,j = 0;
    while(i < row)
    {
        j = 0;
        while(j < col)
        {
            C[i][j] = A[i][j] + B[i][j];
            j++;
        }
        i++;
    }

    printf("Matrix A + Matrix B (Matrix C): \n");
    i = 0;
    while(i < row)
    {
        j = 0;
        while(j < col)
        {
            printf("%d\t",C[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
