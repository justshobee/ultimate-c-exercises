/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 13:21:05 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 18:10:04 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void read_matrix(int *matrix,int row,int col)
{
	printf("Enter element of the matrix %dx%d matrix : \n");
	int i = 0, j = 0,k = 0;
	while(i < row)
	{
		j = 0;
		while(j < col)
		{
			printf("Element [%d][%d] : ",i,j);
			scanf("%d",(matrix + k));
			k++;
			j++;
		}
		i++;
	}
}
void print_matrix(int *matrix,int row,int col)
{
	printf("The matrix[%d][%d] is : \n",row,col);
	int i = 0, j = 0,k = 0;
	while(i < row)
	{
		j = 0;
		while(j < col)
		{
			//printf("%d\t",*(matrix +( i * col + j))); its also work.
			printf("%d\t",*(matrix + k++));
			j++;
		}
		printf("\n");
		i++;
	}
}
int main()
{
	int arr[20][20];
	int row = 3,col = 3;

	int *matrix_ptr = &arr[0][0];
	read_matrix(matrix_ptr,row,col);
	print_matrix(matrix_ptr,row,col);

	return 0;
}
