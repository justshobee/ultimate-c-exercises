/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/09 11:17:11 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/09 11:44:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char *extract_substring(char *s,int start,int len)
{
	char *d = (char *)malloc(len * sizeof(char) + 1);
	if(d == NULL)
		printf("Error:Memory allocation failed!\n");
	
	int read = start;
	int write = 0;
	while(write < len)
		d[write++] = s[read++];
	d[write] = '\0';

	return d;
}
int main()
{
	char *src = "Programming In C";
	int start = 4;
	int len = 7;
	char *dest = extract_substring(src,start,len);
	
	printf("Substring : \"%s\"\n",dest);
	free(dest);
	dest = NULL;
	return 0;
}
