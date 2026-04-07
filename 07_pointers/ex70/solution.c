/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 18:45:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 18:54:32 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void subs_two_mat(int *a,int *b,int row,int col,int *c)
{
	int i = 0, j = 0;
	while(i < row)
	{
		j = 0;
		while(j < col)
		{
			*(c + (i * col + j)) = *(a + (i * col + j)) - *(b + (i * col + j));
			j++;
		}
		i++;
	}
}

void print_mat(int *c,int row,int col)
{
	int i = 0, j = 0;
	while(i < row)
	{
		j = 0;
		while(j < col)
		{
			printf("%d\t",*(c + (i * col + j)));
			j++;
		}
		printf("\n");
		i++;
	}
}
int main()
{
	int A[2][2] = {{10, 20}, {30, 40}};
	int B[2][2] = {{1, 2}, {3, 4}};
	int row = 2,col = 2;
	int C[row][col];

	subs_two_mat(&A[0][0],&B[0][0],row,col,&C[0][0]);
	print_mat(&C[0][0],row,col);

	return 0;
}
