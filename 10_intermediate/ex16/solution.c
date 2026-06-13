/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/13 18:59:27 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/13 19:02:00 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Vector addition
*
* Description: Example of vector addition implementation in C.
*/

#include <stdio.h>

void	vector_add(float v1[], float v2[],float res[], int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		res[i] = v1[i] + v2[i];
		i++;
	}
}

int main(void)
{
  // create some test vectors and a result vector
  float v1[] = {2,5,4};
  float v2[] = {3,2,1};
  float result[] = {0,0,0};

  // perform the vector addition
  vector_add(v1,v2,result,3);

  // print out the result vector
  for (int i = 0; i < 3; i++)
    printf("result[%d]=%f\n",i,result[i]);

  return 0;
}
