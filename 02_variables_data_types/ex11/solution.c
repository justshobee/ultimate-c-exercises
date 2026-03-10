/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/10 12:02:56 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/10 12:14:31 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
int main()
{
	//to get int max from terminal use : getconf INT_MAX
	int max_int = INT_MAX;

	printf("Maximum value of int: %d\n",max_int);
	int overflow_int = max_int + 1;
	printf("After incrementing: %d\n",overflow_int);

	return 0;
}
