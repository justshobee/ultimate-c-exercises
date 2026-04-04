/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/04 19:27:25 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/04 19:39:54 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count = 5;
	int *ptr = NULL;

	ptr = (int *)malloc(count * sizeof(int));

	if(ptr == NULL)
	{
		printf("Memory allocation failed\n");
		exit(0);
	}

	printf("Entrer %d intgers : \n",count);
	int i = 0;
	while(i < count)
	{
		printf("Element %d : ",i+1);
		scanf("%d",ptr+i);//we can also use this ptr and then will increment adress ptr++ 
		i++;
	}
	//but after this we get the last adress again you can use it when you back up the ptr
	printf("\nStored elements are: ");
	i = 0;
	while(i < count)
	{
		printf("%d ",*(ptr + i));//also here
		i++;
	}
	//and here
	
	free(ptr);
	ptr = NULL;

	return 0;
}
