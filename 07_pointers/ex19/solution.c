/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/05 10:14:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/05 10:27:54 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	void *ptr = NULL;
	size_t size_in_bytes = (size_t)1024 * 1024 * 1024;
	ptr = (void *)malloc(size_in_bytes);

	printf("Attempting to allocate 1073741824 bytes (approx 1 GB)...\n");
	
	if(ptr == NULL)
	{
		printf("Error : Memory allocation failed!\n");
		exit(0);
	}

	printf("Successfully allocated the large block at address: %p\n",ptr);


	free(ptr);
	ptr = NULL;


	return 0;
}
