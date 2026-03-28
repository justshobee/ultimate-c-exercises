/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/28 12:15:46 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/28 12:32:53 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void read_matrix(int arr[][10],int row,int col)
{
    printf("Enter the elements of the %dx%d matrix: \n",row,col);
    int i = 0;
    while(i < row)
    {
        int j = 0;
        while(j < col)
        {
            printf("Element [%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
            j++;
        }
        i++;
    }

    printf("\n");
}
void print_matrix(int arr[][10],int row,int col)
{
    printf("The matrix is : \n");
    int  i =0;
    while(i < row)
    {
        int j = 0;
        while(j < col)
        {
            printf("%d\t",arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
int main()
{
    int arr[10][10];

    int row = 3, col = 3;

    read_matrix(arr,row,col);
    print_matrix(arr,row,col);

    return 0;
}
